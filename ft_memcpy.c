/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:48:51 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/24 15:10:40 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srce;
	size_t		i;

	i = -1;
	dest = dst;
	srce = src;
	if (srce != '\0')
		while (++i < n)
			dest[i] = srce[i];
	return (dest);
}
