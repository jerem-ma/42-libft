/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:02:29 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/24 12:06:45 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	big_size;

	if (nmemb == 0 || size == 0)
		return (0);
	big_size = nmemb * size;
	if (big_size / size == nmemb)
		ptr = malloc(nmemb * size);
	else
		return (0);
	return (ptr);
}
