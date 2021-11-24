#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	test_ft_calloc()
{
	free(ft_calloc(0, 5));
	free(ft_calloc(5, 0));
	free(ft_calloc(0, 0));
	
	char	*ptr = ft_calloc(10, 8);
	for (int i = 0; i < 80; i++)
	{
		if (ptr[i] != 0)
			printf("Error ! %d-th byte is not zero !", i);
	}
	free(ptr);

	size_t	n = 2147483647;
	size_t	m = 2;

	while (1)
	{
		size_t size = n * m;
		if (n != size / m)
		{
			ptr = ft_calloc(n, m);
			if (ptr != 0)
			{
				printf("Error ! ptr should be zero with nmemb = %zu and lsize = %zu", n, m);
				break;
			}
			free(ptr);
		}
		m++;
	}
	free(ptr);

	char	*ptr1;
	char	*ptr2;
	ptr1 = ft_calloc(50, 4);
	ptr2 = calloc(50, 4);
	if (memcmp(ptr1, ptr2, 200))
		printf("Error ! ft_calloc should initialize memory area to 0 !");
	free(ptr1);
	free(ptr2);
}
