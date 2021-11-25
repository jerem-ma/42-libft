/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:31:44 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/25 21:17:11 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_bytes;
	unsigned char	*dest_bytes;

	if (!dest && !src)
		return (0);
	src_bytes = (unsigned char *) src;
	dest_bytes = (unsigned char *) dest;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest_bytes[i] = src_bytes[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_bytes[i] = src_bytes[i];
		}
	}

//	char	*temporary_area;
//
//	temporary_area = malloc(sizeof(char) * n);
//	ft_memcpy(temporary_area, src, n);
//	ft_memcpy(dest, temporary_area, n);
//	free(temporary_area);
	return (dest);
}
