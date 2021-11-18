/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:55:49 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/18 17:29:53 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n && s1[i] && s1[i] == s2[i])
	{
		i++;
		--n;
	}
	if (s1[i] == '\200' && s2[i] == '\0')
		return (1);
	else if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

	// while (i <= n && n > 0)
	// {
	// 	if (s1[i] == '\200' && s2[i] == '\0')
	// 		return (1);
	// 	if (s1[i] < s2[i])
	// 		return (-1);
	// 	else if (s1[i] > s2[i])
	// 		return (1);
	// 	i++;
	// }
	// return (0);