/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:28:28 by raulp             #+#    #+#             */
/*   Updated: 2025/10/28 16:51:18 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>


int	ft_printf(char const *, ...);
int	ft_putchar_count(char c, int *counter);




#endif