/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:55:49 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/26 19:30:33 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** " strncmp to9arin bayn ljomal wa bi tali fahiya  3aks memcmp
**    tatawa9af bmojarad mosadafat \0 "
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

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
