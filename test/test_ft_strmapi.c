#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(char const *s, char (*f)(unsigned int, char), char *result)
{
	char	*res_ft = ft_strmapi(s, f);

	if (strcmp(res_ft, result))
	{
		printf("Error ! Diff between ft_strmapi = %s and result = %s with s = %s, f = %p\n", res_ft, result, s, f);
	}
	else
		printf("Ok ! \n");
	free(res_ft);
}

static char	roti(unsigned int i, char c)
{
	return ((c + i) % 256);
}

void	test_ft_strmapi()
{
	test("Coucou", &roti, "Cpwfsz");
	test("", &roti, "");
	test("ooo", &roti, "opq");
}
