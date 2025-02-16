/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:29:25 by maitoumg          #+#    #+#             */
/*   Updated: 2024/12/07 14:29:28 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putstr("2147483648");
		return (count);
	}
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	count += ft_putnumber_base(num, 10, 0);
	return (count);
}
