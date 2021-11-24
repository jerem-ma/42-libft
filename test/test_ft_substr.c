#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static void	test(char const *s, unsigned int start, size_t len, char const *result)
{
	char	*sub1 = ft_substr(s, start, len);
	const char	*sub2 = result;

	if (strcmp(sub1, sub2))
	{
		printf("Error ! Diff between ft_substr = %s and substr = %s with s = %s, start = %u;, len = %zu\n", sub1, sub2, s, start, len);
	}
	else
		printf("Ok ! \n");
	free(sub1);
}

void	test_ft_substr()
{
	test("Bonsoir !", 5, 2, "ir");
	test("Bonsoir !", 5, 8, "ir !");
	test("Bonsoir !", 0, 2, "Bo");
	test("Bonsoir !", 0, 10, "Bonsoir !");
	test("Bonsoir !", 0, 9, "Bonsoir !");
	test("Bonsoir !", 0, 0, "");
	test("Coucou", 200, 4, "");
	test("Coucou", 200, 300, "");
	test("", 0, 5, "");
	test("", 3, 5, "");
	test("", 0, 0, "");
}
