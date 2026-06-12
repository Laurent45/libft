/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:54:03 by lfrederi          #+#    #+#             */
/*   Updated: 2022/09/06 11:45:15 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stddef.h>
# include <stdarg.h>

/*
 * Writes the character c to the file descriptor fd.
 * Return: nothing.
 */
void	ft_putchar_fd(char c, int fd);

/*
 * Writes the string s to the file descriptor fd.
 * Does nothing if s is NULL.
 * Return: nothing.
 */
void	ft_putstr_fd(char *s, int fd);

/*
 * Writes the string s followed by a newline to the file descriptor fd.
 * If s is NULL only the newline is written.
 * Return: nothing.
 */
void	ft_putendl_fd(char *s, int fd);

/*
 * Writes the integer n in base 10 to the file descriptor fd,
 * including a leading '-' for negative values.
 * Return: nothing.
 */
void	ft_putnbr_fd(int n, int fd);

/******************************************************************************
 * Get next line.
 *****************************************************************************/

/*
 * Maximum number of different file descriptors that can be read
 * simultaneously by get_next_line.
 */
# define FD_MAX 1024

/*
 * Number of bytes read from the file descriptor at each read() call.
 */
# define BUFFER_SIZE 1024

/*
 * Associates a file descriptor with its leftover read buffer between
 * two calls to get_next_line.
 */
typedef struct s_buffd
{
	int		fd;
	char	buf[BUFFER_SIZE + 1];
}	t_buffd;

/*
 * Reads the next line (including the terminating '\n' if present)
 * from the file descriptor fd. Can be called in a loop to read a file
 * line by line; supports up to FD_MAX file descriptors in parallel.
 * The returned string is allocated and must be released with free().
 * Return: the next line, or NULL when there is nothing left to read
 * or an error occurred.
 */
char	*get_next_line(int fd);

/*
 * Internal helper. Counts the number of characters of buf belonging to
 * the current line: up to and including the first '\n', or up to the
 * terminating '\0' if no newline is present.
 * Return: the number of characters to copy from buf.
 */
size_t	ft_sizetocpy(char *buf);

/*
 * Internal helper. Same as ft_strlen but accepts a NULL pointer.
 * Return: the length of buf, or 0 if buf is NULL.
 */
size_t	ft_strlen_gnl(char *buf);

/*
 * Internal helper. Appends at most lencopy characters of src to the end
 * of dest and NUL-terminates the result. Does nothing if src is NULL.
 * dest must be large enough to receive the copy.
 * Return: nothing.
 */
void	ft_strlcat_gnl(char *dest, char *src, size_t lencopy);

/*
 * Internal helper. Removes the first lencopy characters from buf
 * (the consumed line) by shifting the remaining characters to the
 * front, then zeroes the freed tail of the buffer.
 * Return: nothing.
 */
void	ft_managebuffer(char *buf, size_t lenbuffer, size_t lencopy);

/*
 * Internal helper. Appends the next chunk of the current line to curr:
 * refills the fd buffer with read() when it is empty, then returns a
 * new allocation holding curr + the buffered characters up to and
 * including a '\n'. curr is freed.
 * Return: the extended line, or NULL on EOF, read error or
 * allocation failure.
 */
char	*ft_createline(int fd, char *curr);

/*
 * Internal helper. Checks whether str ends with a newline character.
 * Return: 1 if the last character of str is '\n', 0 otherwise.
 */
int		ft_isnewline(char *str);

/*
 * Internal helper. Finds the buffer slot associated with fd in buffd,
 * registering fd in a free slot on its first use.
 * Return: the buffer bound to fd, or NULL if all FD_MAX slots are used.
 */
char	*ft_getbuffer(t_buffd *buffd, int fd);

/******************************************************************************
 * Printf
 *****************************************************************************/

/*
 * Writes formatted output to the standard output, mimicking printf.
 * Supported conversions: %c %s %p %d %i %u %x %X %%
 * Supported flags: '-' (left adjust), '0' (zero padding), '#'
 * (alternate form for x/X), ' ' (blank before positive number),
 * '+' (force sign), field width and '.' precision.
 * Return: the number of characters written, or -1 if s is NULL.
 */
int		ft_printf(const char *s, ...);

/*
 * Holds the parsed state of one conversion specification:
 * the conversion character and every flag, width and precision
 * value found between the '%' and the conversion character.
 * minus_flag and dot_flag are -1 when absent.
 */
typedef struct s_args
{
	char	format;
	int		sharp_flag;
	int		sign_flag;
	int		blank_flag;
	int		zero_flag;
	int		digit_padding;
	int		minus_flag;
	int		dot_flag;
}	t_args;

/*
 * Maps a conversion character to the function that prints it.
 * Used as a NULL-terminated dispatch table built by ft_fill_array.
 */
typedef struct s_putflag
{
	char	flag;
	int		(*f_specifer)(va_list *ap, t_args *arg);
}	t_putflag;

/*
 * Internal printers (ft_print_flags.c / ft_print_flags1.c).
 * Each one consumes its argument from ap, prints it according to the
 * flags stored in arg, and returns the number of characters written.
 * ft_print_x: %x   - unsigned int as lowercase hexadecimal.
 * ft_print_xx: %X  - unsigned int as uppercase hexadecimal.
 * ft_print_u: %u   - unsigned int in base 10.
 * ft_print_p: %p   - pointer as 0x-prefixed hexadecimal.
 * ft_print_di: %d %i - signed int in base 10.
 * ft_print_c: %c   - single character.
 * ft_print_s: %s   - string ("(null)" if the argument is NULL).
 * ft_print_percent: %% or any unknown conversion character (prints it).
 */
int		ft_print_x(va_list *ap, t_args *arg);
int		ft_print_xx(va_list *ap, t_args *arg);
int		ft_print_u(va_list *ap, t_args *arg);
int		ft_print_p(va_list *ap, t_args *arg);
int		ft_print_di(va_list *ap, t_args *arg);
int		ft_print_c(va_list *ap, t_args *arg);
int		ft_print_percent(t_args *args);
int		ft_print_s(va_list *ap, t_args *arg);

/*
 * Internal raw writers (ft_putnbr.c / ft_putstr.c).
 * ft_putnbr_x: writes nbr in hexadecimal, uppercase if upper is set.
 * ft_putnbr_u: writes nbr in base 10.
 * ft_putnbr_lux: writes p in lowercase hexadecimal (pointers).
 * ft_putnbr_d: writes nbr in base 10, digits only (sign handled by
 * the caller).
 * ft_putstr: writes the first size characters of s, returns size.
 * ft_putchar: writes c, returns 1.
 * ft_putzero: writes n times '0', returns n.
 * ft_putblank: writes n times ' ', returns n (0 if n <= 0).
 * ft_strlen_pf: returns the length of s as an int.
 */
void	ft_putnbr_x(unsigned int nbr, int upper);
void	ft_putnbr_u(unsigned int nbr);
void	ft_putnbr_lux(unsigned long p);
void	ft_putnbr_d(int nbr);
int		ft_putstr(const char *s, int size);
int		ft_putchar(char c);
int		ft_putzero(int n);
int		ft_putblank(int n);
int		ft_strlen_pf(const char *s);

/*
 * Internal setup and measurement helpers (ft_utils.c).
 * ft_fill_array: fills the conversion dispatch table.
 * ft_init_t_args: resets arg to its default state (no flag set).
 * ft_countdigit_p: number of hexadecimal digits of nbr (pointers).
 * ft_countdigit_ux: number of digits of nbr in the given base.
 * ft_countdigit_d: number of base 10 digits of nbr (sign excluded).
 */
void	ft_fill_array(t_putflag flags[9]);
void	ft_init_t_args(t_args *arg);
int		ft_countdigit_p(unsigned long nbr);
int		ft_countdigit_ux(unsigned int nbr, int lenbase);
int		ft_countdigit_d(int nbr);

/*
 * Internal padding helpers (ft_utils1.c). Each returns the number of
 * characters written (0 when the corresponding flag is not set).
 * ft_padding_blank: right-adjust spaces for a field of width size.
 * ft_left_adjustment: trailing spaces when the '-' flag is set.
 * ft_putzero_dotflag: leading zeros required by the '.' precision.
 * ft_putzero_zeroflag: leading zeros required by the '0' flag.
 * ft_put_sharpflag: writes the "0x"/"0X" prefix for the '#' flag.
 */
int		ft_padding_blank(t_args *arg, long n, int size);
int		ft_left_adjustment(t_args *arg, int len);
int		ft_putzero_dotflag(t_args *arg, int len);
int		ft_putzero_zeroflag(t_args *arg, int len);
void	ft_put_sharpflag(t_args *arg, unsigned int n, int upper);

/*
 * Internal parsing helpers (ft_utils2.c).
 * ft_getindex: index of the printer bound to c in the dispatch table,
 * or -1 if c is not a known conversion character.
 * ft_isformat: 1 if c is a conversion character (cspdiuxX%), else 0.
 * ft_digit: 1 if c is a decimal digit, else 0.
 * ft_isarguments: 1 if c is a flag, width or precision character
 * (0123456789+-.# and space), else 0.
 */
int		ft_getindex(t_putflag *flags, char c);
int		ft_isformat(char c);
int		ft_digit(char c);
int		ft_isarguments(char c);

#endif
