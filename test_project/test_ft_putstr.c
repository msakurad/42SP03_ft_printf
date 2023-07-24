#include "tests.h"

void	test_ft_putstr_1(void)
{
	ft_putstr("abcdefg");
	printf("\n");
}

void	run_test_ft_putstr(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_putstr_1);
	UNITY_END();
}