/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:41:10 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/24 15:18:47 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*srce;
	int			i;

	dest = dst;
	srce = src;
	if (!dest || !srce)
		return (NULL);
	if (dest > srce)
	{
		i = (int)len;
		while (--i >= 0)
			*(dest + i) = *(srce + i);
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			*(dest + i) = *(srce + i);
	}
	return (dest);
}

// void    *ft_memmove(void *dst, const void *src, size_t len)
// {
//     char        *dest;
//     const char  *srce;
//     size_t      i;

//     i = -1;
//     dest = (char*)dst;
//     srce = (const char*)src;
//     if (srce != '\0')
//         while (++i < len)
//             dest[i] = srce[i];
//     return (dest);
// }
