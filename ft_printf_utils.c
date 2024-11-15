/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levincen <levincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:28:51 by levincen          #+#    #+#             */
/*   Updated: 2024/11/15 19:31:09 by levincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;
	int	count;

	i = 0;
	if (!str)
		return (ft_print_str("(null)"));
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

void	ft_putnbr(int n)
{
	int	count;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

// int	main()
// {
// 	printf("%i\n", printf("connard\n"));
// 	return 0;
// }
