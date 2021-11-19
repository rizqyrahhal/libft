/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 06:45:29 by RizQy             #+#    #+#             */
/*   Updated: 2021/11/19 07:14:53 by RizQy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	while (s[i])
	{
		if (i > start && j < len)
		{
			str[j] = s[i];
			j++;
		}		
		i++;
	}
	str[j] = 0;
	return (str);
}
