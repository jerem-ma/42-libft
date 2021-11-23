#include "../libft.h"

int test_ft_isdigit(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_isdigit(i) != isdigit(i))
			printf("Difference with %d : ft_isdigit(i) = %d, isacii(i) = %d\n", i, ft_isdigit(i), isdigit(i));
	}
}
