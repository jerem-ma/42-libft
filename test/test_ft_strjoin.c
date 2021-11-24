#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static void	test(char const *s1, char const *s2, char const *result)
{
	char	*sub1 = ft_strjoin(s1, s2);
	char const	*sub2 = result;

	if (strcmp(sub1, sub2))
	{
		printf("Error ! Diff between ft_strjoin = %s and strjoin = %s with s1 = %s, s2 = %s\n", sub1, sub2, s1, s2);
	}
	else
		printf("Ok ! \n");
	free(sub1);
}

void	test_ft_strjoin()
{
	test("Coucou", " captain !", "Coucou captain !");
	test("", "Hey", "Hey");
	test("Hey", "", "Hey");
	test("Ouahhhhh ce mega texte est mega long :O", ". N'est-ce pas ultra mega genial ?", "Ouahhhhh ce mega texte est mega long :O. N'est-ce pas ultra mega genial ?");
}
