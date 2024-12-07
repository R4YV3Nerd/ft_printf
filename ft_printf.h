#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_puthex(unsigned int n);
int		ft_puthex_uppercase(unsigned int n);
int		ft_putpointer(void *ptr);
int		ft_putnumber_base(unsigned long long n, char *base);

#endif

