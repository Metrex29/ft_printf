/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:28:28 by raulp             #+#    #+#             */
/*   Updated: 2025/11/03 12:24:08 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>


int		ft_printf(char const *, ...);
void	ft_putchar_count(char c, int *counter);
void	ft_putstring_count(char *str, int *counter);
void	ft_puthex_min(unsigned long long n, int *counter);
void	ft_puthex_mayus(unsigned long long n, int *counter);
void	ft_putptr_count(void *p, int *counter);
void	ft_putnbr_fd(int n, int fd,int *counter);
void	ft_putnbr_fd_no_sign(unsigned int n, int fd, int *counter);











#endif