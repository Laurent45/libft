/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:37:01 by lfrederi          #+#    #+#             */
/*   Updated: 2022/08/20 11:20:08 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

/*
 * Copies up to size - 1 characters from the string src to dst,
 * NUL-terminating the result if size is not 0.
 * Return: the total length of src (allows truncation detection:
 * if the return value is >= size, the copy was truncated).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
 * Appends the string src to the end of dst. It will append at most
 * size - strlen(dst) - 1 bytes and NUL-terminate the result.
 * Return: the initial length of dst plus the length of src
 * (if the return value is >= size, the result was truncated).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*
 * Converts c to its uppercase equivalent if c is a lowercase letter.
 * Return: the converted character, or c unchanged otherwise.
 */
int		ft_toupper(int c);

/*
 * Converts c to its lowercase equivalent if c is an uppercase letter.
 * Return: the converted character, or c unchanged otherwise.
 */
int		ft_tolower(int c);

/*
 * Computes the length of the string s, excluding the terminating '\0'.
 * Return: the number of characters in s.
 */
size_t	ft_strlen(const char *s);

/*
 * Locates the first occurrence of c (char) in the string pointed to by s.
 * The '\0' is considered to be part of the string; therefore if c is '\0',
 * the function locates the terminating '\0'.
 * Return: a pointer to the first occurrence, or NULL if c is not found.
 */
char	*ft_strchr(const char *s, int c);

/*
 * Locates the last occurrence of c (char) in the string pointed to by s.
 * The '\0' is considered to be part of the string; therefore if c is '\0',
 * the function locates the terminating '\0'.
 * Return: a pointer to the last occurrence, or NULL if c is not found.
 */
char	*ft_strrchr(const char *s, int c);

/*
 * Lexicographically compares the strings s1 and s2.
 * Return: 0 if the strings are equal, a negative value if s1 is less
 * than s2, and a positive value if s1 is greater than s2.
 */
int		ft_strcmp(const char *s1, const char *s2);

/*
 * Lexicographically compares at most the first n characters of s1 and s2
 * (compared as unsigned char values).
 * Return: 0 if the compared parts are equal, a negative value if s1 is
 * less than s2, and a positive value if s1 is greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
 * Locates the first occurrence of the null-terminated little in the big,
 * where not more than len characters are searched.
 * Characters that appear after a '\0' character are not searched.
 * Return: big if little is empty, a pointer to the first occurrence,
 * or NULL if little does not occur within len characters of big.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*
 * Converts the initial portion of the string pointed to by str to int.
 * Skips leading whitespace, then accepts an optional '+' or '-' sign
 * followed by decimal digits. Stops at the first non-digit character.
 * Return: the converted value (no overflow handling).
 */
int		ft_atoi(const char *str);

/*
 * Converts the initial portion of the string pointed to by str to long.
 * Skips leading whitespace, then accepts an optional '+' or '-' sign
 * followed by decimal digits. Stops at the first non-digit character.
 * Return: the converted value (no overflow handling).
 */
long	ft_atol(const char *str);

/*
 * Allocates sufficient memory for a copy of the string s1 and copies it.
 * The returned pointer must be released with free().
 * Return: a pointer to the duplicate, or NULL if allocation failed.
 */
char	*ft_strdup(const char *s1);

/*
 * Allocates and returns a substring of s, beginning at index start and
 * at most len characters long. If start is beyond the end of s, an
 * empty allocated string is returned.
 * Return: the new substring, or NULL if allocation failed.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
 * Splits the string s into an array of substrings using the character c
 * as delimiter. Consecutive delimiters produce no empty strings.
 * The array is terminated by a NULL pointer and must be released with
 * ft_clear_split (or by freeing each string then the array).
 * Return: the array of substrings, or NULL if allocation failed.
 */
char	**ft_split(char const *s, char c);

/*
 * Frees a NULL-terminated array of strings as returned by ft_split:
 * every string is freed, then the array itself.
 * Return: nothing.
 */
void	ft_clear_split(char **split);

/*
 * Allocates and returns a new string made of the concatenation of
 * s1 followed by s2.
 * Return: the new string, or NULL if s1 or s2 is NULL or if
 * allocation failed.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/*
 * Allocates and returns a copy of s1 with every character belonging to
 * set removed from the beginning and the end of the string.
 * If set is NULL, a plain copy of s1 is returned.
 * Return: the trimmed string, or NULL if s1 is NULL or if
 * allocation failed.
 */
char	*ft_strtrim(char const *s1, char const *set);

/*
 * Allocates and returns a string representing the integer n in base 10,
 * including a leading '-' for negative values.
 * Return: the new string, or NULL if allocation failed.
 */
char	*ft_itoa(int n);

/*
 * Applies the function f to each character of s (with its index as
 * first argument) to build a new allocated string from the successive
 * results. s is left unmodified.
 * Return: the new string, or NULL if s is NULL or allocation failed.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
 * Applies the function f to each character of s in place, passing the
 * index of the character as first argument and its address as second,
 * so each character can be modified.
 * Return: nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif
