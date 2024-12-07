#include "ft_printf.h"

int ft_putnumber_base(unsigned long long num, int base, int is_upper)
{
    char *digits_lower = "0123456789abcdef";
    char *digits_upper = "0123456789ABCDEF";
    char *digits;
    int count = 0;

    if (is_upper)
        digits = digits_upper;
    else
        digits = digits_lower;

    if (num == 0)
        return ft_putchar('0');

    if (num >= (unsigned long long)base)
        count += ft_putnumber_base(num / base, base, is_upper);

    ft_putchar(digits[num % base]);
    return count + 1;
}

