/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:23:56 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/22 17:26:01 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cur;
	char	*src_cur;
	size_t	i;

	dest_cur = dest;
	src_cur = src;
	i = 0;
	while (i < n)
	{
		*dest_cur = *src_cur;
		dest_cur++;
		src_cur++;
	}
}
