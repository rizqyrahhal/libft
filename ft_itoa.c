/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:53:29 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/22 13:09:56 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nb_len(long nb)
{
	long	len;
	
	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

// void	ft_write_nb(char *str, long nb)
// {
// 	long i;

// 	i = 0;
// 	if (nb < 0)
// 	{ 
// 		str[i] = '-';
// 		nb = -nb;
// 		i++;
// 	}
// 	if (nb < 0)
// 	{ 
// 		str[i] = '-';
// 		nb = -nb;
// 		i++;
// 	}
// 	if (nb >= 0 && nb <= 9)
// 		str[i] = nb + 48;
// 	while (nb > 0)
// 	{
// 		ft_write_nb(str, nb / 10);
// 		ft_write_nb(str, nb % 10);
// 	}
// }

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	long	i;
	char *str;

	nb = n;
	len = ft_nb_len(nb);
	i = 0;
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nb < 0)
	{ 
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}