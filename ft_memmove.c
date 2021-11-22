/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:31:44 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/22 17:42:27 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temporary_area;

	temporary_area = malloc(sizeof(char) * n);
	ft_memcpy(temporary_area, src, n);
	ft_memcpy(dest, temporary_area, n);
	free(temporary_area);
	return (dest);
}
