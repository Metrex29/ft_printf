	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   ft_putptr.c                                        :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/10/30 12:06:37 by raulp             #+#    #+#             */
	/*   Updated: 2025/10/30 16:33:11 by raulp            ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include "ft_printf.h"

/* static void print_hex_digit(unsigned long long n, int *counter, int digits)
{
    if (digits > 1)
        print_hex_digit(n / 16, counter, digits - 1);
    ft_putchar_count("0123456789abcdef"[n % 16], counter);
} */

void	ft_putptr_count(void *p, int *counter)
{
	unsigned long long	p1;
	if (p == 0)
	{
		write(1, "(nil)", 5);
		*counter += 5;
		return ;
	}
	p1 = (unsigned long long)p;
	write(1,"0x",2);
	*counter += 2;
	ft_puthex_min(p1,counter);	
}
