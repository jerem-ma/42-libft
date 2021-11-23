#include "../libft.h"

int test_ft_isalpha(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_isalpha(i) != isalpha(i))
			printf("Difference with %d : ft_isalpha(i) = %d, isacii(i) = %d\n", i, ft_isalpha(i), isalpha(i));
	}
}
