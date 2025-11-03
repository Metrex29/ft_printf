/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:23:08 by raulp             #+#    #+#             */
/*   Updated: 2025/11/03 10:48:37 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstring_count(char *str, int *counter)
{
	int i;
	i = 0;
	if(!str)
		str = "(null)";
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
		(*counter)++;
	}
}



