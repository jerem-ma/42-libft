#include "../libft.h"

int test_ft_toupper(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_toupper(i) != toupper(i))
			printf("Difference with %d : ft_toupper(i) = %d, isacii(i) = %d\n", i, ft_toupper(i), toupper(i));
	}
}
