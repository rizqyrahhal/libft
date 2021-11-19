/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:48:46 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/19 20:26:38 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	char	*strf;

	i = 0;
	j = 0;
	k = 0;
	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	strf = (char *)malloc(ft_strlen(str) + 1);
	while (s1[i] == 32 || (s1[i] >= 9 && s1[i] <= 13))
		i++;
	while (s1[i] && set[j] && s1[i] == set[j])
	{
		i++;
		j++;
	}
	if (s1[i] != set[j])
	{
		while (s1[i])
		{
		str[k] = s1[i];
		i++;
		k++;
		}
	}
	i = ft_strlen(str);
	j = ft_strlen(set);
	while (s1[i] == 32 || (s1[i] >= 9 && s1[i] <= 13))
		i--;
	while (str[i] == set[j])
	{
		i--;
		j--;
	}
	while(str[i] != set[j])
	{
		strf[i] = str[i];
		i--;
	}
	str[k] = 0;
	return (strf);
}
