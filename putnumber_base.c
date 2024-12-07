#include ft_printf.h

int putnumber_base(unsigned long long num, int base, int is_upper)
{
    char *digits_lower = 0123456789abcdef;
    char *digits_upper = 0123456789ABCDEF;
    char *digits = is_upper ? digits_upper : digits_lower;
    int count = 0;
    
    if (num >= base)
        count += putnumber_base(num / base, base, is_upper);
    
    ft_putchar(digits[num % base]);
    return count + 1;
}

