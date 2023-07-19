#include <stdarg.h>
#include <stdio.h>

int	variadic_max_number(int num_args, ...)
{
	int	max_n;
	int	n;
	va_list	args;

	va_start(args, num_args);
	max_n = 0;
	max_n = va_arg(args, int);
	while (--num_args)
	{
		n = va_arg(args, int);
		if (n > max_n)
			max_n = n;
	}
	va_end(args);

	return (max_n);
}

int	main(void)
{
	int	max_number;

	max_number = variadic_max_number(5, 14, 12, 10, 15, 17);
	printf("The max number: %d\n\n", max_number);
	return (0);
}