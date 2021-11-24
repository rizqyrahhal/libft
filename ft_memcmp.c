/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:14:24 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/24 20:21:12 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			comparisin;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	comparisin = 0;
	i = 0;
	if (s1 == s2)
		return (comparisin);
	while (n > 0)
	{
		if (str1[i] != str2[i])
		{
			comparisin = str1[i] - str2[i];
			break ;
		}
		i++;
		n--;
	}
	return (comparisin);
}
