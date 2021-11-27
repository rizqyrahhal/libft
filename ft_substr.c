/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 06:45:29 by RizQy             #+#    #+#             */
/*   Updated: 2021/11/27 22:21:24 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	// size_t	i;
	size_t	j;
	char	*str;

	// i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	// while (s[i])
	// {
	// 	if (i >= start && j < len)
	// 	{
	// 		str[j] = s[i];
	// 		j++;
	// 	}
	// 	i++;
	// }
	while (s[start] && j < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = 0;
	return (str);
}
