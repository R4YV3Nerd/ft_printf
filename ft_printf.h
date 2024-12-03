#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h> 

int ft_printf(const char *format, ...);
void ft_putstr(char *str);
void ft_putchar(char c);
void ft_putnbr(int n);
void ft_puthex(unsigned int n, char format);
void ft_putpointer(void *ptr);
void ft_putnbr_unsigned(unsigned int n);

#endif
