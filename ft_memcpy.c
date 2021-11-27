/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:48:51 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 16:08:15 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** "memcpy "
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srce;
	size_t		i;

	i = 0;
	dest = dst;
	srce = src;
	if (dest == srce)
		return (dest);
	if (srce != '\0')
	{
		while (i < n)
		{
			dest[i] = srce[i];
			i++;
		}
	}
	return (dest);
}
