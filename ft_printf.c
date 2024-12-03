#include "ft_printf.h"
#include <unistd.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    
    int count = 0;

    while (*format)
    {
        if (*format == '%' && *(format + 1))
	{
            format++;
            if (*format == 'd')
	    {
                int num = va_arg(args, int);
                ft_putnbr(num);
            }
            else if (*format == 's')
	    {
                char *str = va_arg(args, char *);
                ft_putstr(str);
            }
            else if (*format == 'x')
	    {
                unsigned int hex = va_arg(args, unsigned int);
                ft_puthex(hex);
            }
            else if (*format == 'p')
	    {
                void *ptr = va_arg(args, void *);
                ft_putpointer(ptr);
            }
        }
	else
            ft_putchar(*format);
        format++;
    }

    va_end(args);
    return count;
}
