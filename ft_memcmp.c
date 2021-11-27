/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:14:24 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 22:24:09 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** " memcmp function to9arin bayna ktal adakira wabitali fhiya  
**   tchtaghil 7ata fi 7alat ida ma sadafat \0 "
**  
**  < liyata7a9a9a l2ikhtilaf byna strncmp() wa memcmp() 
**     ista3malt 'comparision' liya7tafida b9imat l2ikhtilaf 
**     fi 7alat ida lam tatasawa ljomlatayn idan ida sadaft \0 fi 
**     ljomlatayn flan yta2atara istimrar lkod li2ana ljomlatayn 
**     motasawiyatayn >
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				comparisin;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	comparisin = 0;
	i = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return (0);
	// if (s1 == s2)
		// return (comparisin);
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