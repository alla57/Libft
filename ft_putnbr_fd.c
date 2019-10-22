/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alboumed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:24:15 by alboumed          #+#    #+#             */
/*   Updated: 2019/10/22 20:32:34 by alboumed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int a;

	a = 0;
	if (n == -2147483648)
	{
		n = -214748364;
		a = 8;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-', fd);
	}
	if (n >= 10)
		ft_putnbr(n / 10, fd);
	n = n % 10;
	ft_putchar(n + 48, fd);
	if (a == 8)
		ft_putchar('8', fd);
}
