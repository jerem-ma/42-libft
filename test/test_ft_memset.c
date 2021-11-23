#include "../libft.h"
#include <time.h>
#include <stdlib.h>

void test_ft_memset(void)
{
	void *ptr1 = malloc(sizeof(char) * 50);
	void *ptr2 = malloc(sizeof(char) * 50);
	for (int i = 0; i < 500; i++)
	{
		unsigned char c = rand() % 256;
		int n = rand() % 50;
		if (memcmp(ft_memset(ptr1, c, n), memset(ptr2, c, n)))
			printf("Difference with c = %d and i = %d", c, i);
	}
	free(ptr1);
	free(ptr2);
}
