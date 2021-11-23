#include "../libft.h"
#include <time.h>
#include <stdlib.h>

void test_ft_memcpy(void)
{
	void *ptrsrc = malloc(sizeof(char) * 50);
	void *ptr1 = malloc(sizeof(char) * 50);
	void *ptr2 = malloc(sizeof(char) * 50);
	for (int i = 0; i < 500; i++)
	{
		int n = rand() % 50;
		ft_memcpy(ptr1, ptrsrc, n);
		memcpy(ptr2, ptrsrc, n);
		if (memcmp(ptr1, ptr2, n)
			printf("Difference with i = %d", c, i);
	}
	free(ptr1);
	free(ptr2);
	free(ptrsrc);
}
