/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:13:08 by rarahhal          #+#    #+#             */
/*   Updated: 2021/11/22 14:13:04 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pp(long nb1, int fd)

{
	char	c;

	if (nb1 >= 0 && nb1 <= 9)
	{
		c = nb1 + 48;
		write(fd, &c, 1);
	}
	else if (nb1 > 0)
	{
		pp(nb1 / 10, fd);
		pp(nb1 % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb2;

	nb2 = (long)n;
	if (nb2 < 0)
	{
		write(fd, "-", 1);
		nb2 = -nb2;
	}
	pp(nb2, fd);
}
