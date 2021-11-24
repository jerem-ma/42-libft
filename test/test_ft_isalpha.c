#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isalpha(void)
{
	for (int i = -257; i < 257; i++)
	{
		if (ft_isalpha(i) * isalpha(i) < 0 || (!ft_isalpha(i) ^ !isalpha(i)))
			printf("Difference with %d : ft_isalpha(i) = %d, isalpha(i) = %d\n", i, ft_isalpha(i), isalpha(i));
	}
}
