#include "ft_printf.h"

int main() {

	printf("Test 1: Standard printf: %s\n", "Hello, World!");
	ft_printf("Test 1: Custom ft_printf: %s\n", "Hello, World!");


	printf("Test 2: Standard printf: %d\n", 42);
	ft_printf("Test 2: Custom ft_printf: %d\n", 42);

	printf("Test 3: Standard printf: %c\n", 'A');
	ft_printf("Test 3: Custom ft_printf: %c\n", 'A');

	printf("Test 4: Standard printf: %x\n", 255);
	ft_printf("Test 4: Custom ft_printf: %x\n", 255);


	printf("Test 5: Standard printf: %f\n", 3.14159);
	ft_printf("Test 5: Custom ft_printf: %f\n", 3.14159);

	return 0;
}