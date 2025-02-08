/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:30:34 by maitoumg          #+#    #+#             */
/*   Updated: 2024/12/07 14:30:47 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    if (str == NULL)
        return (-1);
    int count = 0;
    while (str && *str)
    {
        count += ft_putchar(*str);
        str++;
    }
    return (count);
}