#include ft_printf.h

int ft_putpointer(void *ptr)
{
    unsigned long long ptr_val = (unsigned long long)ptr;
    int count = 0;
    
    count += ft_putchar('0');
    count += ft_putchar('x');
    count += putnumber_base(ptr_val, 16, 0);
    return count;
}

