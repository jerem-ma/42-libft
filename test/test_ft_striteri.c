#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(char *s, void (*f)(unsigned int, char*), char *result)
{
	char *old_s;

	old_s = strdup(s);
	ft_striteri(s, f);

	if (strcmp(s, result))
	{
		printf("Error ! Diff between ft_striteri = %s and result = %s with s = %s, f = %p\n", s, result, old_s, f);
	}
	else
		printf("Ok ! \n");
	free(old_s);
}

static void	roti(unsigned int i, char *c)
{
	*c = ((*c + i) % 256);
}

void	test_ft_striteri()
{
	test("Coucou", &roti, "Cpwfsz");
	test("", &roti, "");
	test("ooo", &roti, "opq");
}
