#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(char const *s, char c, char **result)
{
	char	**res_ft = ft_split(s, c);

	for (int i = 0; result[i]; i++)
	{
		if (strcmp(res_ft[i], result[i]))
		{
			printf("Error ! Diff between ft_split[%d] = %s and result[%d] = %s with s = %s, c = %c\n", i, res_ft[i], i, result[i], s, c);
		}
		else
			printf("Ok ! \n");
	}
	free(res_ft);
}

void	test_ft_split()
{
	char *res1[] = {"Bonjour", "les", "amis", "!"};
	test("Bonjour les amis !", ' ', res1);

	char *res2[] = {"Comment", "ca", "va", "?"};
	test(" Comment ca va ?", ' ', res2);

	char *res3[] = {"Des", "espaces", "de", "partout", ":O"};
	test("      Des     espaces     de    partout :O      ", ' ', res3);
}
