/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:10:19 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/11/03 14:11:10 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_count(void *p, int *counter)
{
	unsigned long long	p1;

	if (p == 0)
	{
		write (1, "(nil)", 5);
		*counter += 5;
		return ;
	}
	p1 = (unsigned long long)p;
	write (1, "0x", 2);
	*counter += 2;
	ft_puthex_min(p1, counter);
}
