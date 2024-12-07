#include "ft_printf.h"

int ft_putstr(char *str)
{
    int count = 0;
    while (str && *str)
    {
        count += ft_putchar(*str);
        str++;
    }
    return count;
}

