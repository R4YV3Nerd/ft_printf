#include "ft_printf.h"

int ft_puthex_uppercase(unsigned int num)
{
    return ft_putnumber_base(num, 16, 1);
}

