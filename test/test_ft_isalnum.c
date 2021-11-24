#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void test_ft_isalnum(void)
{
	for (int i = -257; i < 257; i++)
	{
		if (ft_isalnum(i) * isalnum(i) < 0 || (!ft_isalnum(i) ^ !isalnum(i)))
			printf("Difference with %d : ft_isalnum(i) = %d, isalnum(i) = %d\n", i, ft_isalnum(i), isalnum(i));
	}
}
