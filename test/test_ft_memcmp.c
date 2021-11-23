#include "../libft.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

static char *rand_string(char *str, size_t size)
{
	if (size) {
		--size;
		for (size_t n = 0; n < size; n++) {
			char c = rand() % 256;
			str[n] = c;
		}
		str[size] = '\0';
	}
	return str;
}

static char* rand_string_alloc(size_t size)
{
	char *s = malloc(size + 1);
	if (s) {
		rand_string(s, size);
	}
	return s;
}

void test_ft_memcmp(void)
{
	char	*str;
	char	*str2;
	int		n;
	for (int i = 0; i < 500; i++)
	{
		str = rand_string_alloc(10);
		str2 = rand_string_alloc(10);
		n = rand() % 10;
		if (memcmp(str, str2, n) != ft_memcmp(str, str2, n))
			printf("Difference with %s : ft_memcmp(str) = %d, memcmp(str) = %d\n", str, ft_memcmp(str, str2, n), memcmp(str, str2, n));
		free(str);
		free(str2);
	}
	for (int i = 0; i < 500; i++)
	{
		str = rand_string_alloc(2);
		str2 = rand_string_alloc(2);
		n = rand() % 2;
		if (memcmp(str, str2, n) != ft_memcmp(str, str2, n))
			printf("Difference with %s : ft_memcmp(str) = %d, memcmp(str) = %d\n", str, ft_memcmp(str, str2, n), memcmp(str, str2, n));
		free(str);
		free(str2);
	}

}
