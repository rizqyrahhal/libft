/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:54:44 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/22 17:05:00 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map_s;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	map_s = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!map_s)
		return (NULL);
	index = -1;
	while (s[++index])
		map_s[index] = f(index, s[index]);
	map_s[index] = '\0';
	return (map_s);
}
