/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:55:49 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 14:17:22 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** " strncmp to9arin bayn ljomal wa bi tali fahiya  3aks memcmp
**    tatawa9af bmojarad mosadafat \0 "
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n && s1[i] && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
**printf(" La différence entre STRNCMP () et MEMCMP ()");
**printf("\nTEST 1 : s1:(aa[]) s2:(bb[]) n: 10\n");
**char aa[10] = {'E','n','g','l','i','s','h',0,'A'};
**char bb[10] = {'E','n','g','l','i','s','h',0,'B'};
**printf("return valus of ft_strncmp function === %d\n", ft_strncmp(aa, bb, 10));
**printf("return valus of strncmp function === %d\n", strncmp(aa, bb, 10));
**printf("return valus of ft_memcmp function === %d\n", ft_memcmp(aa, bb, 10));
**printf("return valus of memcmp function === %d\n", memcmp(aa, bb, 10));
*/