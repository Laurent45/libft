/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:07:09 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/26 23:04:15 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	len_s;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= (unsigned int) len_s)
		return ((char *) ft_calloc(1, 1));
	if (len_s < len)
		len = len_s;
	ret = (char *) ft_calloc((len + 1), 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		ret[i] = s[start];
		start++;
		i++;
	}
	return (ret);
}
