/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:14:24 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/26 19:36:14 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** " memcmp function t9arin bayna ktal adakira wabitali fhiya  
**   tchtaghil 7ata fi 7alat ida ma sadafat \0 "
**  
**  < liyata7a9a9a l2ikhtilaf byna strncmp() wa memcmp() 
**     ista3malt 'comparision' liya7tafida b9imat l2ikhtilaf 
**     fi 7alat ida lam tatasawa ljomlatayn idan ida sadaft \0 fi 
**     ljomlatayn flan yta2atara istimrar lkod li2ana ljomlatayn 
**     motasawiyatayn 
*/

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
