#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(char *s, char (*f)(unsigned int, char*), char *result)
{
	ft_striteri(s, f);

	if (strcmp(s, result))
	{
		printf("Error ! Diff between ft_striteri = %s and result = %s with s = %s, f = %p\n", res_ft, result, s, f);
	}
	else
		printf("Ok ! \n");
	free(res_ft);
}

static char	roti(unsigned int i, char c)
{
	return ((c + i) % 256);
}

void	test_ft_striteri()
{
	test("Coucou", &roti, "Cpwfsz");
	test("", &roti, "");
	test("ooo", &roti, "opq");
}
