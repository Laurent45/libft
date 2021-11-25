/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:35:35 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/24 12:32:45 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*tmp;

	if (!s)
		return (0);
	i = 0;
	tmp = (char *) s;
	while (i < n)
	{
		tmp[i] = (char) c;
		i++;
	}
	return (s);
}
