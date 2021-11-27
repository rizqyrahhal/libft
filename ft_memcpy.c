/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:48:51 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 17:38:40 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** "memcpy to3tti 9ima ghayr montadara fi 7alat isti3maliha
**  linaskh dakhil nasf string lihada nasta3mil memmove 
**   fi hadihi l7ala 3iwad memcpy "
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
