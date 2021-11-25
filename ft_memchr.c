/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:40:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/25 14:01:05 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	size_t				i;

	if (!s)
		return (NULL);
	tmp = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char) c)
			return ((void *) &tmp[i]);
		i++;
	}
	return (NULL);
}
