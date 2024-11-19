/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levincen <levincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 07:48:15 by levincen          #+#    #+#             */
/*   Updated: 2024/11/19 14:07:58 by levincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#	include <unistd.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_print_str(char *str);
int		ft_print_percent(void);
int		ft_print_udecimal(unsigned int n);
int		ft_putnbr(int n);
int		ft_print_hexa(unsigned long nb, char *format);


#endif
