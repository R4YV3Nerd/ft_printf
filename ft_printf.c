#include "ft_printf.h"

int handle_format_specifier(char specifier, va_list args)
{
    int count = 0;
    if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (specifier == 'x')
        count += ft_puthex(va_arg(args, unsigned int));
    else if (specifier == 'X')
        count += ft_puthex_uppercase(va_arg(args, unsigned int));
    else if (specifier == 'p')
        count += ft_putpointer(va_arg(args, void *));
    else if (specifier == 'u')
        count += ft_putnumber_base(va_arg(args, unsigned int), 10, 0);
    else if (specifier == '%')
        count += ft_putchar('%');
    else if (specifier == 'c')
        count += ft_putchar((char)va_arg(args, int));
    return count;
}

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
            count += handle_format_specifier(*format, args);
        }
        else
            count += ft_putchar(*format);
        format++;
    }

    va_end(args);
    return count;
}
