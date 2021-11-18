/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:31 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/16 18:53:05 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = 0;
	while (s[i])
	{
		if (s[i] == c)
			tmp = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		tmp = (char *)(s + i);
	return (tmp);
}
