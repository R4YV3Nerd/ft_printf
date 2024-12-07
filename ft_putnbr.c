#include ft_printf.h

int ft_putnbr(int num)
{
    int count = 0;
    if (num < 0)
    {
        count += ft_putchar('-');
        num = -num;
    }
    count += putnumber_base(num, 10, 0);
    return count;
}

