/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:01:16 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/26 18:49:43 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)p + i);
		i++;
	}
	return (NULL);
}
