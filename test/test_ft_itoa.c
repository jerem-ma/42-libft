#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(int n, char *result)
{
	char	*res_ft = ft_itoa(n);

	if (strcmp(res_ft, result))
	{
		printf("Error ! Diff between ft_itoa = %s and result = %s with n = %d\n", res_ft, result, n);
	}
	else
		printf("Ok ! \n");
	free(res_ft);
}

void	test_ft_itoa()
{
	test(0, "0");
	test(4, "4");
	test(-4, "-4");
	test(458, "458");
	test(-42, "-42");
	test(2147483647, "2147483647");
	test(-2147483648, "-2147483648");
}
