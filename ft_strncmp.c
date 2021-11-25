/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:08:54 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/25 13:35:08 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if ((n == 0) || !s1 || !s2)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
