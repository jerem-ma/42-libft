/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:07:48 by jmaia             #+#    #+#             */
/*   Updated: 2022/01/06 14:47:36 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int	ft_isint(char *nbr)
{
	int		i;
	char	*test_nbr;

	if (!ft_isnbr(nbr))
		return (0);
	i = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	test_nbr = (char *) ft_itoa(ft_atoi(nbr));
	if (!test_nbr)
		return (0);
	if (ft_strcmp(nbr + i, test_nbr))
		return (0);
	free(test_nbr);
	return (1);
}
