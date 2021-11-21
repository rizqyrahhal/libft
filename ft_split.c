/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:04:58 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/20 19:23:09 by RizQy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_delimitr(char *str, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			j++;
	}
	return (j);
}

int	len_of_split(char *str, char c, int index)
{
	int	len;

	len = 0;
	while (str && str[index] && str[index] != c, str[index])
		index++;
	while (str && str[index] && str[index] != c, str[index])
	{
		len++;
		index++;
	}
	return (len);
}

char	*split(char *str, char c, int index, int len)
{
	int		i;
	char	*split_str;	

	split_str = malloc(sizeof(char) * (len + 1));
	if (!split_str)
		return (NULL);
	i = 0;
	(void)c;
	while (i < len)
		split_str[i++] = str[index++];
	split_str[i] = '\0';
	return (split_str);
}

// char	*ft_string(char *str, char c)
// {
// 	int	i;
// 	int	len;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != c)
// 		{
// 			len = 0;
// 			i++;
// 			len++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (str);
// }

char	**ft_split(char const *s, char c)
{
	int	r;
	int	c;
	int	i;
	int	j;
	// int	count;
	
	c = ft_num_str((char *)s, c);
	r = ft_num_delimitr((char *)s, c);
	i = 0;
    char	**arr = (char **)malloc(r * sizeof(char*) + 1);
    while (s[i] && r > 0)
	{
		j = 0;
        arr[j] = (char *)malloc(ft_strlen() * sizeof(char));
		i++;
		r--;
	}
	return (arr);
}

int	main()
{
	
}
	// int	i;
	
	// i = 0;
	
	// char	**str = (char **)malloc((sizeof(char *) * ft_num_delimitr((char *)s, c) + 1));
	// while (i < ft_num_delimitr((char *)s, c) + 1)
	// {
	// 	if (s[i] && s[i] != c)
	// 	{
				
	// 	}
	// }	







// {
// 	int		i;
// 	char	**str;

// 	i = 0;
// 	str = (char **)malloc(sizeof(s) + 1);
// 	if (!str)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			*str[i] = (char)s[i];
// 			i++;
// 		}
// 		else
// 			str[i] = &c;
// 		i++;
// 	}
// 	str[i] = 0;
// 	return (str);
// }