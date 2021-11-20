/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:48:46 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/19 22:48:51 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		begin = 0;
		end = ft_strlen(s1);
		while (s1[begin] && ft_strchr(set, s1[begin]))
			begin++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > begin)
			end--;
		str = (char *)malloc(sizeof(char) * (end - begin + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[begin], end - begin + 1);
	}
	return (str);
}

	// int		i;
	// int		j;
	// int		k;
	// char	*str;
	// char	*strf;

	// i = 0;
	// j = 0;
	// k = 0;
	// str = (char *)malloc(ft_strlen(s1) + 1);
	// if (!str)
	// 	return (NULL);
	// strf = (char *)malloc(ft_strlen(str) + 1);
	// while (s1[i] == 32 || (s1[i] >= 9 && s1[i] <= 13))
	// 	i++;
	// while (s1[i] && set[j] && s1[i] == set[j])
	// {
	// 	i++;
	// 	j++;
	// }
	// if (s1[i] != set[j])
	// {
	// 	while (s1[i])
	// 	{
	// 	str[k] = s1[i];
	// 	i++;
	// 	k++;
	// 	}
	// }
	// i = ft_strlen(str);
	// j = ft_strlen(set);
	// while (s1[i] == 32 || (s1[i] >= 9 && s1[i] <= 13))
	// 	i--;
	// while (str[i] == set[j])
	// {
	// 	i--;
	// 	j--;
	// }
	// while(str[i] != set[j])
	// {
	// 	strf[i] = str[i];
	// 	i--;
	// }
	// str[k] = 0;
	// return (strf);
