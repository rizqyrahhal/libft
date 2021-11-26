/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:48:51 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/26 12:49:43 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srce;
	size_t		i;

	i = 0;
	dest = dst;
	srce = src;
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
