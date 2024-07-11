#include <criterion/criterion.h>
#include <signal.h>

int	ft_atoi(char *str);

Test(ft_atoi, simple_cases)
{
	char	*cases[] = {
		"-2147483647",
		"-999",
		"-42",
		"-12",
		"-9",
		"-1",
		"0",
		"1",
		"9",
		"12",
		"42",
		"999",
		"2147483646",
		NULL
	};

	for (size_t i = 0; cases[i]; i++)
		cr_assert_eq(ft_atoi(cases[i]), atoi(cases[i]));
}

Test(ft_atoi, edge_cases)
{
	char	*cases[] = {
		"-01234567890123456789",
		"-2147483649",
		"-2147483648",
		"-0",
		"2147483647",
		"2147483648",
		"01234567890123456789",
		NULL
	};

	for (size_t i = 0; cases[i]; i++)
		cr_assert_eq(ft_atoi(cases[i]), atoi(cases[i]));
}

Test(ft_atoi, null_ptr, .signal = SIGSEGV)
{
	ft_atoi(NULL);
}
