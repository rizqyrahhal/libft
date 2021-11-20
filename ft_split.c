/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:04:58 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/20 14:23:12 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
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