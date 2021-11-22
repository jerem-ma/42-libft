/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:13:14 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/22 15:14:51 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*++s)
		count++;
	return (count);
}
