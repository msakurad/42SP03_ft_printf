#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	count_tests;

	count_tests = 0;
	count_tests++;
	printf("\n\033[1;36mTEST N%d: \033[0m\n", count_tests);
	ft_printf("Sample text, testing putchar and putstr");

	printf("\n\033[1;36m---------------------------------------\033[0m\n");
	count_tests++;
	printf("\n\033[1;36mTEST N%d: \033[0m", count_tests);
	printf("Return value of ft_printf, look for the variable \"len\"\n");
	int	nbr_printed_chars;
	printf("Sample for \"abcdefg\"\n");
	nbr_printed_chars = ft_printf("abcdefg");
	printf("\n");
	printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	printf("Sample for \"abcdefg with \\n, \\v, \\t, \\a, \\b, \\f, \\r\"\n");
	nbr_printed_chars = ft_printf("abcdefg\n\v\t\a\b\f\r");
	printf("\n");
	printf("The number of characters printed: %d\n", nbr_printed_chars);

	printf("\n\033[1;36m---------------------------------------\033[0m\n");
	count_tests++;
	printf("\n\033[1;36mTEST N%d: \033[0m", count_tests);
	printf("The conversions %%cspdiuxX%%\n");
	ft_printf("%%c with ascii number 97: %c\n", 97);
	ft_printf("%%c with literal char 'b': %c\n", 'b');
	ft_printf("%%s with \"my tests\": %s\n", "my tests");
	ft_printf("%%p: %p\n", "jorge");
	printf("%%p: %p\n", "jorge");

	printf("\n\033[1;36m---------------------------------------\033[0m\n");
	count_tests++;
	printf("\n\033[1;36mTEST N%d: \033[0m", count_tests);
	printf("Return value for the conversions (len)\n");
	printf("Sample for \"%%%%c-%c-%%s-%s\"\n", 'a',"bcdefg");
	nbr_printed_chars = ft_printf("%%%c%s", 'a',"bcdefg");
	printf("\n");
	printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	// ft_printf("\n--------------------\n");
	// ft_printf("%%d: %d\n", 42);
	// ft_printf("%%d for 0xA: %d\n", 0xA);
	// ft_printf("%%i for 0xA: %i\n", 0xA);
	// ft_printf("%%i: %i\n", -42);
	// ft_printf("%%i INT_MAX: %i\n", INT_MAX);
	// ft_printf("%%i INT_MIN: %i\n", INT_MIN);
	// ft_printf("%%u unsigned positive 42: %u\n", 42);
	// ft_printf("%%u unsigned negative -42: %u\n", -42);
	// ft_printf("%%u unsigned negative -1: %u\n", -1);
	// ft_printf("%%u unsigned INT_MAX: %u\n", INT_MAX);
	// ft_printf("%%u unsigned INT_MIN: %u\n", INT_MIN);
	// ft_printf("--------------------\n");
	// ft_printf("%%x 15: %x\n", 15);
	// ft_printf("%%x 16: %x\n", 16);
	// ft_printf("%%x 20: %x\n", 20);
	// ft_printf("%%x 1234567: %x\n", 1234567);
	// ft_printf("%%X 14: %X\n", 14);
	// ft_printf("%%X 15: %X\n", 15);
	// ft_printf("%%X 1234567: %X\n", 1234567);
	// ft_printf("--------------------\n");
	// ft_printf("%% %% %% %%\n");

	/*Bonus:
	- flags '-0.'
	- minimum width
	- '# +'
	*/
	// ft_printf("\n--------------------\n");
	// ft_printf("2. bonus = use of flags: \n");
	// ft_printf("%%c with ascii number 97: %0c\n", 97);
	// ft_printf("%%c with literal char 'b': %c\n", 'b');
	// ft_printf("%%s: %s\n", "my tests");
	// ft_printf("%%p: %p\n", "jorge");
	// ft_printf("\n--------------------\n");
	// ft_printf("\n--------------------\n");
	// ft_printf("Use of flags (spaces, +, numbers) in numbers\n");
	// ft_printf("%%5d: %5d\n", 42);
	// ft_printf("%%10d: %10d\n", 42);
	// ft_printf("%%-5d: %-5d\n", 42);
	// ft_printf("%%-10d: %-10d\n", 42);
	// ft_printf("%%05d: %05d\n", 42);
	// ft_printf("%% 5d: % 5d\n", 42);
	// ft_printf("%%5d: %5d\n", 42);
	// ft_printf("%%+d: %+d\n", 42);
	// ft_printf("\n--------------------\n");
	// ft_printf("Use of '#'\n");
	// ft_printf("%%#X 1234567: %#X\n", 1234567);
	// ft_printf("%%#X 23: %#X\n", 23);
	// ft_printf("%%#.3X 23: %#.3X\n", 23);
	// ft_printf("\n--------------------\n");
	// ft_printf("Use of '.'\n");
	// ft_printf("%%.5d: %.5d\n", 42);
	// ft_printf("%%.0d: %.0d\n", 0);
	// ft_printf("%%.7X: %.7X\n", 23);
	// ft_printf("%%.5s: %.5s\n", "abcdefghij");
	// ft_printf("\n--------------------\n");
	// ft_printf("Return of the function\n");
	// int	nbr_printed_chars;
	// ft_printf("Sample for \"abcdefg\"\n");
	// nbr_printed_chars = ft_printf("abcdefg");
	// ft_printf("\n");
	// ft_printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	// ft_printf("Sample for \"abcdefg with \\n\"\n");
	// nbr_printed_chars = ft_printf("abcdefg\n");
	// ft_printf("\n");
	// ft_printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	// ft_printf("Sample for \"abcdefg with \\n, \\v, \\t, \\a, \\b, \\f, \\r\"\n");
	// nbr_printed_chars = ft_printf("abcdefg\n\v\t\a\b\f\r");
	// ft_printf("\n");
	// ft_printf("The number of characters printed: %d\n\n", nbr_printed_chars);

	printf("\n\033[42m--------------------------------------------------\033[0m\n");
	printf("\n\033[42mTOTAL OF TESTS: %d\033[0m\n\n", count_tests);
	return (0);
}