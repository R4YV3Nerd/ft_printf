#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main() {
    int ft_count, real_count;

    // Test 1: Basic string
    printf("Test 1: Basic string\n");
    ft_count = ft_printf("Hello, world!\n");
    real_count = printf("Hello, world!\n");
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 2: Integer (positive)
    printf("Test 2: Integer (positive)\n");
    ft_count = ft_printf("Number: %d\n", 1234);
    real_count = printf("Number: %d\n", 1234);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 3: Integer (negative)
    printf("Test 3: Integer (negative)\n");
    ft_count = ft_printf("Number: %d\n", -1234);
    real_count = printf("Number: %d\n", -1234);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 4: Unsigned integer
    printf("Test 4: Unsigned integer\n");
    ft_count = ft_printf("Unsigned: %u\n", 1234);
    real_count = printf("Unsigned: %u\n", 1234);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 5: Hexadecimal (lowercase)
    printf("Test 5: Hexadecimal (lowercase)\n");
    ft_count = ft_printf("Hex (lowercase): %x\n", 1234);
    real_count = printf("Hex (lowercase): %x\n", 1234);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 6: Hexadecimal (uppercase)
    printf("Test 6: Hexadecimal (uppercase)\n");
    ft_count = ft_printf("Hex (uppercase): %X\n", 1234);
    real_count = printf("Hex (uppercase): %X\n", 1234);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 7: Pointer address
    printf("Test 7: Pointer address\n");
    int *ptr = NULL;
    ft_count = ft_printf("Pointer: %p\n", ptr);
    real_count = printf("Pointer: %p\n", ptr);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 8: Char
    printf("Test 8: Char\n");
    ft_count = ft_printf("Char: %c\n", 'A');
    real_count = printf("Char: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 9: String
    printf("Test 9: String\n");
    ft_count = ft_printf("String: %s\n", "Hello");
    real_count = printf("String: %s\n", "Hello");
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 10: Mixed formats
    printf("Test 10: Mixed formats\n");
    ft_count = ft_printf("Mix: %d, %s, %x\n", 1234, "Hello", 255);
    real_count = printf("Mix: %d, %s, %x\n", 1234, "Hello", 255);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 11: Edge case - Maximum integer value
    printf("Test 11: Edge case - Maximum integer value\n");
    ft_count = ft_printf("Max int: %d\n", INT_MAX);
    real_count = printf("Max int: %d\n", INT_MAX);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    // Test 12: Edge case - Minimum integer value
    printf("Test 12: Edge case - Minimum integer value\n");
    ft_count = ft_printf("Min int: %d\n", INT_MIN);
    real_count = printf("Min int: %d\n", INT_MIN);
    printf("ft_printf: %d, printf: %d\n\n", ft_count, real_count);

    return 0;
}

