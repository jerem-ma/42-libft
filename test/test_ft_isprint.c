#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isprint(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_isprint(i) != isprint(i))
			printf("Difference with %d : ft_isprint(i) = %d, isacii(i) = %d\n", i, ft_isprint(i), isprint(i));
	}
}
