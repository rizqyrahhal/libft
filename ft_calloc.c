/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:21:28 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/27 23:18:17 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * sizeof(void *));
	return (p);
}

/*
int	main()
{
	int *ttest;
    ttest  = ft_calloc(5,sizeof(int));

	printf("%d\n",ttest[5]);
	return 0;
}
** "ista3malt sizeof(void *) likay tata3amala ft_bzero
**  ma3a ay tybe li2ana void* ta7taj 8 byt wahiya akbar min 
**   tout les type que trouve "
*/