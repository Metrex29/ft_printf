/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:28:39 by raulp             #+#    #+#             */
/*   Updated: 2025/11/03 10:58:05 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthex_min(unsigned long long n, int *counter)
{
	
	char *char_hex = "0123456789abcdef";

	if(n >= 16)
		ft_puthex_min(n/16, counter);
	ft_putchar_count(char_hex[n % 16], counter);
	
}

void ft_puthex_mayus(unsigned long long n, int *counter)
{
	char *char_hex = "0123456789ABCDEF";
	
	if(n >= 16)
		ft_puthex_mayus(n / 16,counter);
	ft_putchar_count(char_hex[n % 16], counter);
	
}