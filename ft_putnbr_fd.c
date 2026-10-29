/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:12:30 by username          #+#    #+#             */
/*   Updated: 2026/10/28 12:45:51 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_char('-', fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_char(nb + '0', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_char((nb % 10) + '0', fd);
	}
}
// int main(void)
// {
// 	int		n = -12345;
// 	int		fd = 1;

// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }
