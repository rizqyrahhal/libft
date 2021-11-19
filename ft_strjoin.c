/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:54:45 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/19 17:33:32 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*newstring;

	i = -1;
	j = -1;
	k = 0;
	newstring = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstring)
		return (NULL);
	while (s1[++i])
	{
		newstring[k] = s1[i];
		k++;
	}
	while (s2[++j])
	{
		newstring[k] = s2[j];
		k++;
	}	
	newstring[k] = 0;
	return (newstring);
}
