#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(int argc, char **argv)
{

	run_test_ft(1);
	printf("\n\n\033[42mTOTAL OF TESTS: %d\033[0m\n", 1);
	return (0);
	// return (UNITY_END());
}

void	run_test_ft(int enum_test)
{
	switch (enum_test)
	{
	case 1:
		RUN_FT_TEST(01, test_ft_putstr)
		break;
	// case 2:
	// 	RUN_FT_TEST(02, test_ft_isdigit)
	// 	break;
	default:
		printf("Check again the argument passed in the terminal\n");
		break;
	}
}
