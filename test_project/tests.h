
#ifndef TESTS_H
# define TESTS_H

# include "unity.h"
# include "unity_internals.h"
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
//# include <bsd/strings.h>
# include <strings.h>
# include <ctype.h>
# include <limits.h>

#define RUN_FT_TEST(id, ftname) \
	printf("\n----------------\n\n"); \
	printf("\n\033[1;36mTESTE N%s: %s\033[0m\n\n", #id, #ftname); \
	run_##ftname();

void	run_test_ft(int enum_test);

// MANDATORY
void	run_test_ft_putstr(void);

// BONUS


enum Tests
{
	// MANDATORY
	Tests_ft_putstr = 1,
	// BONUS
	
};

#endif

