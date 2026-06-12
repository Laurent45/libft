/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:19:28 by lfrederi          #+#    #+#             */
/*   Updated: 2022/01/07 14:24:45 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>

/*
 * Writes n bytes of value c (converted to an unsigned char)
 * to the memory area pointed to by s.
 * Return: s.
 */
void	*ft_memset(void *s, int c, size_t n);

/*
 * Writes n zeroed bytes to the memory area pointed to by s.
 * If n is 0 the function does nothing.
 * Return: nothing.
 */
void	ft_bzero(void *s, size_t n);

/*
 * Copies n bytes from src to dest.
 * The memory areas must not overlap (use ft_memmove instead).
 * Return: dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
 * Copies n bytes from src to dest. The memory areas may overlap:
 * the copy is always done in a non-destructive manner.
 * Return: dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/*
 * Locates the first occurrence of c (converted to an unsigned char)
 * in the first n bytes of the memory area pointed to by s.
 * Return: a pointer to the matching byte, or NULL if c is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/*
 * Compares the first n bytes of the memory areas s1 and s2
 * (compared as unsigned char values).
 * Return: 0 if the areas are identical, otherwise the difference
 * between the first pair of bytes that differ.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * Contiguously allocates enough space for count objects of size bytes
 * each and fills the whole area with zeroed bytes.
 * The returned pointer must be released with free().
 * Return: a pointer to the allocated memory, or NULL if
 * allocation failed.
 */
void	*ft_calloc(size_t count, size_t size);

#endif
