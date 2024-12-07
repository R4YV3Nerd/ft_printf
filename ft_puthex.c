#include "ft_printf.h"

int ft_puthex(unsigned int n)
{
    return ft_putnumber_base((unsigned long long)n, 16, 0);
}
