#include <criterion/criterion.h>
#include <signal.h>

size_t	ft_strlen(const char *str);

Test(ft_strlen, simple_cases)
{
	char	*cases[] = {
		"Hello",
		", ",
		"world!",
		"0123456789012345678901234567890123456789",
		NULL
	};

	for (size_t i = 0; cases[i]; i++)
		cr_assert_eq(ft_strlen(cases[i]), strlen(cases[i]));
}

Test(ft_strlen, edge_cases)
{
	char	*cases[] = {
		"",
		NULL
	};

	for (size_t i = 0; cases[i]; i++)
		cr_assert_eq(ft_strlen(cases[i]), strlen(cases[i]));
}

Test(ft_strlen, null_ptr, .signal = SIGSEGV)
{
	ft_strlen(NULL);
}
