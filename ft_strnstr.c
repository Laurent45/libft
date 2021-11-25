/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:57:09 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/25 15:25:56 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t;

	if (!little[0])
		return ((char *) big);
	i = 0;
	j = 0;
	while (big[i])
	{
		t = 0;
		if (big[i] == little[j])
		{
			t = i;
			while ((big[t] == little[j]) && (j < len) && little[j])
			{
				t++;
				j++;
			}
			if ((j == len) || !little[j])
				return ((char *) &big[t]);
		}
		i++;
	}
	return (NULL);
}
