#include "../libft.h"

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

int test_ft_atoi(void)
{
	char	*n1;	
	char	*n2;

	for (int i = 0; i < 500; i++)
	{
		n1 = rand_string_alloc(10);
		if (atoi(n1) != ft_atoi(n1))
			printf("Difference with %s : ft_atoi(n1) = %d, atoi(n1) = %d\n", n1, ft_atoi(n1), atoi(n1));
	}
}
