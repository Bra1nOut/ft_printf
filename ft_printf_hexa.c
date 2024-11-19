/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levincen <levincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:55:38 by levincen          #+#    #+#             */
/*   Updated: 2024/11/19 14:27:08 by levincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long nb, char *format)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_print_hexa(nb / 16, format);
		count += ft_print_hexa(nb % 16, format);
	}
	else
	{
		if (*format == 'X')
			count += ft_putchar("0123456789ABCDEF"[nb % 16]);
		else if (*format == 'x')
			count += ft_putchar("0123456789abcdef"[nb % 16]);
	}
	return (count);
}
// int	main(void)
// {
// 	int	i = 255;
// 	int	len;
// 	len = ft_print_hexa(i, "x");
// 	printf("\nil y a %d caracteres au dessus", len);
// }
