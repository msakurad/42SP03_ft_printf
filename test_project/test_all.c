#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

int	main(int argc, char **argv)
{
	enum Tests test_first;
	enum Tests test_last;
	int	nbr_tests;
	char	*test_part_argv;
	int	count;

	test_part_argv = (char *)malloc(sizeof(char) * 30);
	count = 1;
	if (argc > 1)
		strcpy(test_part_argv, argv[1]);
	if (!strcmp(test_part_argv, "p1"))
	{
		test_first = Tests_ft_isalpha;
		test_last = Tests_ft_strdup;
	}
	else if (!strcmp(test_part_argv, "p2"))
	{
		test_first = Tests_ft_substr;
		test_last = Tests_ft_putnbr_fd;
	}
	else if (!strcmp(test_part_argv, "bonus"))
	{
		test_first = Tests_ft_lstnew_bonus;
		test_last = Tests_ft_lstmap_bonus;
	}
	else
	{
		test_first = Tests_ft_isalpha;
		test_last = Tests_ft_putnbr_fd;
	}
	nbr_tests = test_last - test_first;
	if (atoi(test_part_argv))
	{
		count = 0;
		nbr_tests = count;
		test_first = atoi(test_part_argv);
	}
	while (count <= nbr_tests)
	{
		run_test_ft((int)test_first + count);
		count++;
	}
	printf("\n\n\033[42mTOTAL OF TESTS: %d\033[0m\n", count);
	return (0);
	// return (UNITY_END());
}

void	run_test_ft(int enum_test)
{
	switch (enum_test)
	{
	case 1:
		RUN_FT_TEST(01, test_ft_isalpha)
		break;
	// case 2:
	// 	RUN_FT_TEST(02, test_ft_isdigit)
	// 	break;
	default:
		printf("Check again the argument passed in the terminal\n");
		break;
	}
}
