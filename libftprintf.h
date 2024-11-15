/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levincen <levincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 07:48:15 by levincen          #+#    #+#             */
/*   Updated: 2024/11/15 11:36:05 by levincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#	include <unistd.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_print_str(char *str);
int		ft_print_percent(void);
int	ft_putnbr(int n);

#endif
