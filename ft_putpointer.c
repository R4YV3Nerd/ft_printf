#include "ft_printf.h"

int ft_putpointer(void *ptr)
{
    int count = 0;
    
    if (ptr == NULL)
    {
        count += ft_putstr("(nil)");
        return count;
    }
    
    unsigned long long ptr_val = (unsigned long long)ptr;
    count += ft_putchar('0');
    count += ft_putchar('x');
    count += ft_putnumber_base(ptr_val, 16, 0);
    return count;
}

