/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:48:51 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 17:38:40 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** "memcpy to3tti 9ima ghayr montadara fi 7alat isti3maliha
**  linaskh dakhil nasf string lihada nasta3mil memmove 
**   fi hadihi l7ala 3iwad memcpy "
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srce;
	size_t		i;

	i = 0;
	dest = (char *)dst;
	srce = (const char *)src;
	if (dest == srce)
		return (dest);
	if (srce != '\0')
	{
		while (i < n)
		{
			dest[i] = srce[i];
			i++;
		}
	}
	return (dest);
}

/*
	printf("\n  La différence entre MEMMOVE() et MEMCPY() :\n");
    printf("\nTEST MEMMOVE()\n");
    printf("str785245[] = 'abcdefghljk'\n");
    char str785245[] = "abcdefghljk";
    printf("%s\n", ft_memmove(&str785245[2],&str785245[0],9));
    printf("\nTEST MEMCPY()\n");
    printf("str7852435[] = 'abcdefghljk'\n");
    char str7852435[] = "abcdefghljk";
    printf("%s\n", ft_memcpy(&str7852435[2],&str7852435[0],9));
*/