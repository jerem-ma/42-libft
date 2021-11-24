#include "../libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	test(char const *s1, char const *set, char const *result)
{
	char	*sub1 = ft_strtrim(s1, set);
	char const	*sub2 = result;

	if (strcmp(sub1, sub2))
	{
		printf("Error ! Diff between ft_strtrim = %s and result = %s with s1 = %s, set = %s\n", sub1, sub2, s1, set);
	}
	else
		printf("Ok ! \n");
	free(sub1);
}

void	test_ft_strtrim()
{
	test("Ouahh, ne fait rien stp", " ", "Ouahh, ne fait rien stp");
	test(" La par contre, va falloir faire !", " ", "La par contre, va falloir faire !");
	test("     Ouahhhh trop à retirer !!", " ", "Ouahhhh trop à retirer !!");
	test("Dans l'autre sens !    ", " ", "Dans l'autre sens !");
	test("    Les 2 en même temps ??     ", " ", "Les 2 en même temps ??");
	test("3214123123 Et si on mettait plusieurs caractères ? 131313111122", "123456789", " Et si on mettait plusieurs caractères ? ");
	test("", "1213", "");
	test("", " ", "");
	test("Ouahhh on vide rien", "", "Ouahhh on vide rien");
	test("", "", "");
}
