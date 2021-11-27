/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:01:16 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 22:19:56 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;

	p = (unsigned char *)s;
	i = 0;
	while (p[i] && i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)p + i);
		i++;
	}
	return (NULL);
}
