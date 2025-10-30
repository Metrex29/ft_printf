/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:06:37 by raulp             #+#    #+#             */
/*   Updated: 2025/10/30 16:03:24 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putptr_count(void *p, int *counter)
{
	write(1,"0x",2);
	*counter += 2;
	unsigned long long p1 =  (unsigned long long)p;
	ft_puthex_min(p1,counter);	
	return NULL;
} 