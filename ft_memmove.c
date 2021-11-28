/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:41:10 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/28 00:03:04 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** " l9ima lmodafa li memmove() 3ala memcpy()
**   fi kawniha tachtaghil 7ata fi 7alat
**   anaskh min nafs string <Memory overlap> "
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*srce;
	int			i;

	dest = (char *)dst;
	srce = (const char *)src;
	if (!dest || !srce)
		return (NULL);
	if (dest == srce)
		return (dest);
	if (dest > srce)
	{
		i = (int)len;
		while (--i >= 0)
			dest[i] = srce[i];
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			dest[i] = srce[i];
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