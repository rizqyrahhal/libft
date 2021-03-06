/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:00:07 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/30 13:49:43 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

	// size_t	i;
	// size_t	j;

	// i = 0;
	// if (!haystack[i] && !needle[i])
	// 	return ("");
	// while (haystack[i] && i < len)
	// {
	// 	j = 0;
	// 	while (haystack[i + j] && needle[j]
	// 		&& i + j < len && haystack[i + j] == needle[j])
	// 		j++;
	// 	if (!needle[j])
	// 		return ((char *)(haystack + i));
	// 	i++;
	// }
	// return (NULL);