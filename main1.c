#include "ft_printf.h"

int main()

{
char *str = "Hello, World!";
int num = 0, x = 0;

// x += printf(NULL);
num += ft_printf(NULL);
ft_printf("%d", num);
// printf("%d", x);

return 0;
}
