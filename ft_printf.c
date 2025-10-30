/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:42:12 by raulp             #+#    #+#             */
/*   Updated: 2025/10/30 15:59:38 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_select_parameter(va_list va, char format, int *count)
{
	if(format == 'c')
		ft_putchar_count(va_arg(va, int),count);
	else if(format == 's')
		ft_putstring_count(va_arg(va,char *),count);
	else if(format == 'p')
		ft_putptr_count(va_arg(va, void *), count);
	else if(format == 'x')
		ft_puthex_min((unsigned long long)va_arg(va, void *),count);
	else if(format == 'X')
		ft_puthex_mayus((unsigned long long)va_arg(va, void *),count);
	else if(format == '%')
		ft_putchar_count('%',count);
	else if(format == 'd' || format =='i')
		ft_putnbr_fd(va_arg(va, int), 1, count);
}

int ft_printf(char const *str, ...)
{
	va_list		va;
	int	char_count;

	if(!str)
		return (0);
	char_count = 0;
	va_start(va, str);
	while(*str)
	{
		if(*str == '%')
		{
			str++;
			ft_select_parameter(va,*str,&char_count);
		}else
			ft_putchar_count(*str,&char_count);
		str++;
	}
	return char_count;
	
}

/* #include <stdio.h>
int main (void )
{
	char *str = "hola";
	void *hol = str;
	int ret1, ret2;
	ret1 = ft_printf("s %s, c %c hex, %x HEX %X, ptr %p, %d %i \n", "raul" , 'a' , 10u, 14u, hol, 10 , 2);
	ret2 = printf("s %s, c %c hex, %x HEX %X, ptr %p , %d %i \n", "raul", 'a', 10u, 14u, hol, 10 , 2);
	

printf("ft_printf returned: %d\n", ret1);
printf("printf returned: %d\n", ret2);

	return 0;
}
 */