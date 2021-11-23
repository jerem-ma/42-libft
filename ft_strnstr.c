/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:09:55 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/23 09:22:39 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		i_little;

	i = 0;
	i_little = 0;
	while (i < len && little[i_little] && big[i])
	{
		if (big[i] == little[i_little])
			i_little++;
		else
			i_little = 0;
		i++;
	}
	if (!little[i_little])
		return (0);
	return ((char *)&big[i - i_little]);
}
