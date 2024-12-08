/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:01:55 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:24:52 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	num_writer(int num, int fd)
{
	char	c;

	c = num + '0';
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	else if (nb < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		num_writer(nb, fd);
}
