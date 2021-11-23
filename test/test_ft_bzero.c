#include "../libft.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void test_ft_bzero(void)
{
	void *ptr1 = malloc(sizeof(char) * 50);
	void *ptr2 = malloc(sizeof(char) * 50);
	for (int i = 0; i < 500; i++)
	{
		int n = rand() % 50;
		ft_bzero(ptr1, n);
		bzero(ptr2, n);
		if (memcmp(ptr1, ptr2, n))
			printf("Difference with n = %d", n);
	}
	free(ptr1);
	free(ptr2);
}
