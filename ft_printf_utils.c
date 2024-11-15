/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levincen <levincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:28:51 by levincen          #+#    #+#             */
/*   Updated: 2024/11/15 11:35:42 by levincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

int	ft_putnbr(int n)
{
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
// 	ft_print_nbr(-475);
// 	write(1, "\n", 1);
// 	return 0;
// }