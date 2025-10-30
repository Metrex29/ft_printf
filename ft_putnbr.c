/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:53:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/30 17:30:56 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

/*
 * Print integer n and update *counter using the project's helper
 * functions so the total character count is correct for ft_printf.
 */
void	ft_putnbr_fd(int n, int fd, int *counter)
{
	char c;

	(void)fd;
	if (n == -2147483648)
	{
		ft_putstring_count("-2147483648", counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_count('-', counter);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, counter);
	c = n % 10 + '0';
	ft_putchar_count(c, counter);
}

void	ft_putnbr_fd_no_sign(int n, int fd, int *counter)
{
	char c;

	(void)fd;

	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, counter);
	c = n % 10 + '0';
	ft_putchar_count(c, counter);
}
