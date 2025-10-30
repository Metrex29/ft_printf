/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:23:08 by raulp             #+#    #+#             */
/*   Updated: 2025/10/30 11:55:17 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char * ft_putstring_count(char *str, int *counter)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
		(*counter)++;
	}
	return (str);
}



