#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void test_ft_isalnum(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_isalnum(i) != isalnum(i))
			printf("Difference with %d : ft_isalnum(i) = %d, isacii(i) = %d\n", i, ft_isalnum(i), isalnum(i));
	}
}
