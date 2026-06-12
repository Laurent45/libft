/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:53:20 by lfrederi          #+#    #+#             */
/*   Updated: 2022/01/07 14:21:03 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

/*
 * Checks if c is an alphabetic character (uppercase or lowercase).
 * Return: 0 if false, a non-zero value if true.
 */
int		ft_isalpha(int c);

/*
 * Checks if c is a decimal digit character ('0' to '9').
 * Return: 0 if false, a non-zero value if true.
 */
int		ft_isdigit(int c);

/*
 * Checks if c is an alphanumeric character (letter or decimal digit).
 * Return: 0 if false, a non-zero value if true.
 */
int		ft_isalnum(int c);

/*
 * Checks if c is an ASCII character (0 to 127).
 * Return: 0 if false, a non-zero value if true.
 */
int		ft_isascii(int c);

/*
 * Checks if c is a printable character, space included (' ' to '~').
 * Return: 0 if false, a non-zero value if true.
 */
int		ft_isprint(int c);
#endif
