#include ft_printf.h

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
            if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);
                count += ft_putnbr(num);
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                count += ft_putstr(str);
            }
            else if (*format == 'x')
            {
                unsigned int hex = va_arg(args, unsigned int);
                count += ft_puthex(hex);
            }
            else if (*format == 'X')
            {
                unsigned int hex = va_arg(args, unsigned int);
                count += ft_puthex_uppercase(hex);
            }
            else if (*format == 'p')
            {
                void *ptr = va_arg(args, void *);
                count += ft_putpointer(ptr);
            }
            else if (*format == '%')
            {
                count += ft_putchar('%');
            }
        }
        else
        {
            count += ft_putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

