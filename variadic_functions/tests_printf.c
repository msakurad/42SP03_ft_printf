#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int	main(void)
{
	// printf("1. normal:\n");
	// printf("%%c with ascii number 97: %c\n", 97);
	// printf("%%c with literal char 'b': %c\n", 'b');
	// printf("%%s: %s\n", "my tests");
	// printf("%%p: %p\n", "jorge");
	// printf("\n--------------------\n");
	// printf("%%d: %d\n", 42);
	// printf("%%d for 0xA: %d\n", 0xA);
	// printf("%%i for 0xA: %i\n", 0xA);
	// printf("%%i: %i\n", -42);
	// printf("%%i INT_MAX: %i\n", INT_MAX);
	// printf("%%i INT_MIN: %i\n", INT_MIN);
	// printf("%%u unsigned positive 42: %u\n", 42);
	// printf("%%u unsigned negative -42: %u\n", -42);
	// printf("%%u unsigned negative -1: %u\n", -1);
	// printf("%%u unsigned INT_MAX: %u\n", INT_MAX);
	// printf("%%u unsigned INT_MIN: %u\n", INT_MIN);
	// printf("--------------------\n");
	// printf("%%x 15: %x\n", 15);
	// printf("%%x 16: %x\n", 16);
	// printf("%%x 20: %x\n", 20);
	// printf("%%x 1234567: %x\n", 1234567);
	// printf("%%X 14: %X\n", 14);
	// printf("%%X 15: %X\n", 15);
	// printf("%%X 1234567: %X\n", 1234567);
	// printf("--------------------\n");
	// printf("%% %% %% %%\n");

	/*Bonus:
	- flags '-0.'
	- minimum width
	- '# +'
	*/
	printf("\n--------------------\n");
	printf("2. bonus = use of flags: \n");
	// printf("%%c with ascii number 97: %0c\n", 97);
	// printf("%%c with literal char 'b': %c\n", 'b');
	// printf("%%s: %s\n", "my tests");
	// printf("%%p: %p\n", "jorge");
	// printf("\n--------------------\n");
	printf("\n--------------------\n");
	printf("Use of flags (spaces, +, numbers) in numbers\n");
	printf("%%5d: %5d\n", 42);
	printf("%%10d: %10d\n", 42);
	printf("%%-5d: %-5d\n", 42);
	printf("%%-10d: %-10d\n", 42);
	printf("%%05d: %05d\n", 42);
	printf("%% 5d: % 5d\n", 42);
	printf("%%5d: %5d\n", 42);
	printf("%%+d: %+d\n", 42);
	printf("\n--------------------\n");
	printf("Use of '#'\n");
	printf("%%#X 1234567: %#X\n", 1234567);
	printf("%%#X 23: %#X\n", 23);
	printf("%%#.3X 23: %#.3X\n", 23);
	printf("\n--------------------\n");
	printf("Use of '.'\n");
	printf("%%.5d: %.5d\n", 42);
	printf("%%.0d: %.0d\n", 0);
	printf("%%.7X: %.7X\n", 23);
	printf("%%.5s: %.5s\n", "abcdefghij");
	printf("\n--------------------\n");
	printf("Return of the function\n");
	int	nbr_printed_chars;
	printf("Sample for \"abcdefg\"\n");
	nbr_printed_chars = printf("abcdefg");
	printf("\n");
	printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	printf("Sample for \"abcdefg with \\n\"\n");
	nbr_printed_chars = printf("abcdefg\n");
	printf("\n");
	printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	printf("Sample for \"abcdefg with \\n, \\v, \\t, \\a, \\b, \\f, \\r\"\n");
	nbr_printed_chars = printf("abcdefg\n\v\t\a\b\f\r");
	printf("\n");
	printf("The number of characters printed: %d\n\n", nbr_printed_chars);
	return (0);
}
