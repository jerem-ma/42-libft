#include "../libft.h"

int test_ft_tolower(void)
{
	for (int i = -512; i < 512; i++)
	{
		if (ft_tolower(i) != tolower(i))
			printf("Difference with %d : ft_tolower(i) = %d, isacii(i) = %d\n", i, ft_tolower(i), tolower(i));
	}
}
