/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:04:58 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/21 19:38:29 by rarahhal         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		start;
	int		end;
	int		i;

	arr = (char **)malloc((num_of_words((char *)s, c) + 1) * sizeof(char *));
	if (!s || !c || !arr)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while (i < num_of_words((char *)s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		arr[i] = ft_substr(s, start, (end - start));
		start = end;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

// int	ft_len_str(char *str, char c, int i)
// {
// 	int	len;

// 	len = 0;
// 	while (str[i] == c)
// 		i++;
// 	while (str[i] && str[i] != c)
// 	{
// 		i++;
// 		len++;
// 	}
// 	return (len);
// }