#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isascii(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_isascii(i) != isascii(i))
			printf("Difference with %d : ft_isascii(i) = %d, isacii(i) = %d\n", i, ft_isascii(i), isascii(i));
	}
}
