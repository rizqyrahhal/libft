/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:04:58 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/20 21:23:41 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
char	**ft_split(char const *s, char c)
{
	int	i;
	
	i = 0;
	char	**str = (char **)malloc((sizeof(char *) * ft_num_delimitr((char *)s, c) + 1));
	while (i < ft_num_delimitr((char *)s, c) + 1)
	{
		if (s[i] && s[i] != c)
		{
				
		}
	}	
}*/






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