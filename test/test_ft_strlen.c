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

void test_ft_strlen(void)
{
	char	*str;
	for (int i = 0; i < 500; i++)
	{
		str = rand_string_alloc(10);
		if (strlen(str) != ft_strlen(str))
			printf("Difference with %s : ft_strlen(str) = %lu, strlen(str) = %lu\n", str, ft_strlen(str), strlen(str));
		free(str);
	}

}
