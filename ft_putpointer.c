/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:30:16 by maitoumg          #+#    #+#             */
/*   Updated: 2024/12/07 14:30:19 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int					count;
	unsigned long long	ptr_val;

	count = 0;
	if (ptr == NULL)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	ptr_val = (unsigned long long)ptr;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_putnumber_base(ptr_val, 16, 0);
	return (count);
}
