/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:04:58 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/21 15:41:06 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_of_words(char *str, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++; 
		i++;
	}
	return (j);
}

int	ft_len_str(char *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}


char	**ft_split(char const *s, char c)
{
	int	r;
	int	i;
	int word;
	int	j;
	int	k;
	char	**arr;

	r = num_of_words((char *)s, c);
	arr = (char **)malloc((r + 1) * sizeof(char*));
	i = 0;
    while (r > 0)
	{
		while (s[i] == c)
			i++;
		j = 0;
		word = ft_len_str((char *)s, c, i);
		// printf("%d\n", word);
        arr[j] = (char *)malloc(word * sizeof(char) + 1);
		i += word;
		j++;
		r--;
		arr[j] = 0;
	}
	// while (s[i] != c && s[i] && k <= r)
	// {
	// 	j = 0;
	// 	k = 0;
	// 	arr[j][k++] = s[i++];
	// }
	// arr[j++][k] = '\0';
	arr[i] = NULL;
	return (arr);
}
