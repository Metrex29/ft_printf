/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:42:12 by raulp             #+#    #+#             */
/*   Updated: 2025/10/28 16:53:08 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



void	ft_select_parameter(va_list va, char format, int *count)
{
	if(format == 'c')
		ft_putchar_count(va_arg(va, int),count);
		
}

int ft_printf(char const *str, ...)
{
	va_list		va;
	size_t i;
	int	char_count;

	if(!str)
		return (0);
	i = 0;
	char_count = 0;
	va_start(va, str);
	
	while(str[i])
	{
		i++;
		if(str[i] == '%')
		{
				i++;
			ft_select_parameter(va,str[i],&char_count);
		}
		return 0;
	}
	return 0;
	
}