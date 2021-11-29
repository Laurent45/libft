/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:46:50 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/29 12:39:34 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*tmp_src;
	char			*tmp_dest;

	if (!dest && !src)
		return (dest);
	tmp_src = (const char *) src;
	tmp_dest = (char *) dest;
	if (n)
	{
		if (dest > src)
		{
			n--;
			while (n)
			{
				tmp_dest[n] = tmp_src[n];
				n--;
			}
			tmp_dest[n] = tmp_src[n];
		}
		else
			return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
