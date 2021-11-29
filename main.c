/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:04:10 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/29 12:37:26 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
	/* //FT_ISALPHA
	printf("\033[0;32m");
	printf("FT_ISALPHA\n");
	printf("\033[0m");
	printf("isalpha('c') = %d / ft_isalpha('c') = %d\n", isalpha('c'), ft_isalpha('c'));
	printf("isalpha('+') = %d / ft_isalpha('+') = %d\n", isalpha('+'), ft_isalpha('+'));
	printf("isalpha('F') = %d / ft_isalpha('F') = %d\n", isalpha('F'), ft_isalpha('F'));
	printf("isalpha(356) = %d / ft_isalpha(356) = %d\n", isalpha(356), ft_isalpha(356));
	printf("isalpha(-547) = %d / ft_isalpha(-547) = %d\n", isalpha(-547), ft_isalpha(-547));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");*/
	

	/* //FT_ISDIGIT
	printf("\033[0;32m");
	printf("FT_ISDIGIT\n");
	printf("\033[0m");
	printf("isdigit('1') = %d / ft_isdigit('1') = %d\n", isdigit('1'), ft_isdigit('1'));
	printf("isdigit('+') = %d / ft_isdigit('+') = %d\n", isdigit('+'), ft_isdigit('+'));
	printf("isdigit('9') = %d / ft_isdigit('9') = %d\n", isdigit('9'), ft_isdigit('9'));
	printf("isdigit(356) = %d / ft_isdigit(356) = %d\n", isdigit(356), ft_isdigit(356));
	printf("isdigit(-547) = %d / ft_isdigit(-547) = %d\n", isdigit(-547), ft_isdigit(-547));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");*/

	/* //FT_ISALNUM
	printf("\033[0;32m");
	printf("FT_ISALNUM\n");
	printf("\033[0m");
	printf("isalnum('1') = %d / ft_isalnum('1') = %d\n", isalnum('1'), ft_isalnum('1'));
	printf("isalnum('a') = %d / ft_isalnum('a') = %d\n", isalnum('a'), ft_isalnum('a'));
	printf("isalnum('9') = %d / ft_isalnum('9') = %d\n", isalnum('9'), ft_isalnum('9'));
	printf("isalnum('K') = %d / ft_isalnum('K') = %d\n", isalnum('K'), ft_isalnum('K'));
	printf("isalnum('+') = %d / ft_isalnum('+') = %d\n", isalnum('+'), ft_isalnum('+'));
	printf("isalnum(356) = %d / ft_isalnum(356) = %d\n", isalnum(356), ft_isalnum(356));
	printf("isalnum(-547) = %d / ft_isalnum(-547) = %d\n", isalnum(-547), ft_isalnum(-547));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");*/

	/* //FT_ISASCII
	printf("\033[0;32m");
	printf("FT_ISASCII\n");
	printf("\033[0m");
	printf("isascii('1') = %d / ft_isascii('1') = %d\n", isascii('1'), ft_isascii('1'));
	printf("isascii('a') = %d / ft_isascii('a') = %d\n", isascii('a'), ft_isascii('a'));
	printf("isascii('9') = %d / ft_isascii('9') = %d\n", isascii('9'), ft_isascii('9'));
	printf("isascii('K') = %d / ft_isascii('K') = %d\n", isascii('K'), ft_isascii('K'));
	printf("isascii('+') = %d / ft_isascii('+') = %d\n", isascii('+'), ft_isascii('+'));
	printf("isascii(356) = %d / ft_isascii(356) = %d\n", isascii(356), ft_isascii(356));
	printf("isascii(0) = %d / ft_isascii(0) = %d\n", isascii(0), ft_isascii(0));
	printf("isascii(127) = %d / ft_isascii(127) = %d\n", isascii(127), ft_isascii(127));
	printf("isascii(128) = %d / ft_isascii(128) = %d\n", isascii(128), ft_isascii(128));
	printf("isascii(-547) = %d / ft_isascii(-547) = %d\n", isascii(-547), ft_isascii(-547));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");

	// FT_ISPRINT
	printf("\033[0;32m");
	printf("FT_ISPRINT\n");
	printf("\033[0m");
	printf("isprint('1') = %d / ft_isprint('1') = %d\n", isprint('1'), ft_isprint('1'));
	printf("isprint('a') = %d / ft_isprint('a') = %d\n", isprint('a'), ft_isprint('a'));
	printf("isprint('9') = %d / ft_isprint('9') = %d\n", isprint('9'), ft_isprint('9'));
	printf("isprint('K') = %d / ft_isprint('K') = %d\n", isprint('K'), ft_isprint('K'));
	printf("isprint('+') = %d / ft_isprint('+') = %d\n", isprint('+'), ft_isprint('+'));
	printf("isprint(356) = %d / ft_isprint(356) = %d\n", isprint(356), ft_isprint(356));
	printf("isprint(127) = %d / ft_isprint(127) = %d\n", isprint(127), ft_isprint(127));
	printf("isprint(20) = %d / ft_isprint(20) = %d\n", isprint(20), ft_isprint(20));
	printf("isprint(128) = %d / ft_isprint(128) = %d\n", isprint(128), ft_isprint(128));
	printf("isprint(126) = %d / ft_isprint(126) = %d\n", isprint(126), ft_isprint(126));
	printf("isprint(-547) = %d / ft_isprint(-547) = %d\n", isprint(-547), ft_isprint(-547));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");


	// FT_STRLEN
	printf("\033[0;32m");
	printf("FT_STRLEN\n");
	printf("\033[0m");
	const char *s = "Hello world";
	printf("strlen(%s) = %ld / ft_strlen(%s) = %ld\n", s, strlen(s), s, ft_strlen(s));
	//printf("strlen(NULL) = %ld\n", strlen(s));
	//printf("ft_strlen(NULL) = %ld\n", ft_strlen(s));
	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
	*/

	/*
	//FT_MEMSET
	printf("\033[0;32m");
	printf("FT_MEMSET\n");
	printf("\033[0m");

	char s[20] = "";
	char s1[20] = "";
	int c = 380;
	size_t size = 4;
	printf("memset() = %s / ft_memset() = %s\n", (char *) memset((void *) s, c, size), (char *) ft_memset((void *) s1, c, size));

	int t[5] = {51, 69, 47, 125, 78};
	int t1[5] = {51, 69, 47, 125, 78};
	int ct = 1;
	size_t sizet = 5 * sizeof(int);

	memset((void *) t, ct, sizet);
	ft_memset((void *) t1, ct, sizet);
	for (int i = 0; i < 5; i++)
		printf("memset() = %d / ft_memset() = %d\n", t[i], t1[i]);

	char test[10] = "";
	ft_memset((void *)test, 131, 5);

	for (int i = 0; i < 5; i++)
		printf("%d\n", test[i]);
	//ft_memset(0, 12, 2);

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/
	
	/*
	// FT_BZERO
	printf("\033[0;32m");
	printf("FT_BZERO\n");
	printf("\033[0m");

	char st[20] = "Hello world";
	char st1[20] = "Hello world";
	size_t sizett = 4;
	bzero((void *) st, sizett);
	ft_bzero((void *) st1, sizett);
	printf("bzero() = %s / ft_bzero() = %s\n", st, st1);

	int tt[5] = {51, 69, 47, 125, 78};
	int tt1[5] = {51, 69, 47, 125, 78};
	size_t sizettt = 2 * sizeof(int);

	bzero((void *) tt, sizettt);
	ft_bzero((void *) tt1, sizettt);
	for (int i = 0; i < 5; i++)
		printf("bzero() = %d / ft_bzero() = %d\n", tt[i], tt1[i]);
*/
//	bzero(0, 12, 2);

//	printf("\033[0;32m");
//	printf("----------------------------------------\n\n");
//	printf("\033[0m");
/*

	//FT_MEMCPY
	printf("\033[0;32m");
	printf("FT_MEMCPY\n");
	printf("\033[0m");

	char dest[20] = "Hello world";
	printf("memcpy() = %s\n", (char *) ft_memcpy((void*) dest, (void*) "42", 2));
	for (int i = 0; i < 20; i++)
		printf("i = %d -> %c\n", i, dest[i]);
	//printf("memcpy() = %s / ft_memcpy() = %s\n", (char *) memcpy((void*) dest, (void*) "42", 5), (char *) ft_memcpy((void*) dest, (void*) "42", 5));
	char m[10] = "";
	char mc[5] = {'m', '\0', 'o', '\0', 'i'};
	ft_memcpy((void *) 0, (void *) mc, 5);
	write(1, m, 5);
	printf("|\n");

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
	*/


	//FT_MEMMOVE
	
	printf("\033[0;32m");
	printf("FT_MEMMOVE\n");
	printf("\033[0m");

	//char str[40] = "Hello world, how are you";
	//char *res = (char *) ft_memmove((void *) str, (const void *) (str + 6), 9);
	//for (int i = 0; i < 10; i++)
	//	printf("%c", res[i]);
	//printf("\n");
	//char *src = "thanks to @apellicc for this test !\r\n";
	//char dst1[0xF0];
	//int size = strlen(src);
	//char *r1 = memmove(dst1, src, size);
	//char *r2 = ft_memmove(dst1, src, size);
	//if (r1 != r2)
	//	printf("error\n");
	//r1 = memmove("", "" - 1, 0);
	//r2 = ft_memmove("", "" - 1, 0);
	//if (r1 != r2)
	//	printf("error\n");
	//printf("success\n");


	//char str[40] = "Hello world, how are you";
	//char *res = (char *) ft_memmove((void *) (str + 12), (const void *) (str + 6), 13);
	//for (int i = 0; i < 13; i++)
	//	printf("%c", res[i]);
	//printf("\n");

	memmove(0, 0, 6);


	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");


/*	
	//FT_STRLCPY
	
	printf("\033[0;32m");
	printf("FT_STRLCPY\n");
	printf("\033[0m");

	char pdest[10];
	char *psrc = "src est copie dans dest";
	printf("%ld / %s\n", ft_strlcpy(pdest, psrc, 0), pdest);

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/
		
/*
	//FT_STRLCAT
	
	printf("\033[0;32m");
	printf("FT_STRLCAT\n");
	printf("\033[0m");

	char kdest[5] = "ABCD";
	printf("%ld / %s", strlcat(kdest, "EFGHIJ", 45), kdest);

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");

*/

/*
	//FT_TOLOWER FT_TOUPPER
	
	printf("\033[0;32m");
	printf("FT_TOLOWER, FT_TOUPPER\n");
	printf("\033[0m");

	printf("tolower(65) = %d / ft_tolower(65) = %d\n", tolower(65), ft_tolower(65));
	printf("tolower(73) = %d / ft_tolower(73) = %d\n", tolower(73), ft_tolower(73));
	printf("tolower(65) = %d / ft_tolower(65) = %d\n", tolower(65), ft_tolower(65));
	printf("tolower(-65) = %d / ft_tolower(-65) = %d\n", tolower(-65), ft_tolower(-65));
	printf("tolower(6536) = %d / ft_tolower(6536) = %d\n", tolower(6536), ft_tolower(6536));
	printf("tolower(-1) = %d / ft_tolower(-1) = %d\n", tolower(-1), ft_tolower(-1));

	printf("toupper(98) = %d / ft_toupper(98) = %d\n", toupper(98), ft_toupper(98));
	printf("toupper(108) = %d / ft_toupper(108) = %d\n", toupper(108), ft_toupper(108));
	printf("toupper(65) = %d / ft_toupper(65) = %d\n", toupper(65), ft_toupper(65));
	printf("toupper(-985) = %d / ft_toupper(-985) = %d\n", toupper(-985), ft_toupper(-985));
	printf("toupper(6536) = %d / ft_toupper(6536) = %d\n", toupper(6536), ft_toupper(6536));
	printf("toupper(-1) = %d / ft_toupper(-1) = %d\n", toupper(-1), ft_toupper(-1));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	// FT_STRCHR
	
	printf("\033[0;32m");
	printf("FT_STRCHR\n");
	printf("\033[0m");
	
	char *chr = "Hello world";
	//char chrt[5] = {'a', 'b', 'c', 'd', 'e'};
	printf("strchr = %p / ft_strchr = %p\n", strchr(chr, 111), ft_strchr(chr, 111));
	printf("strchr = %p / ft_strchr = %p\n", strchr(chr, 97), ft_strchr(chr, 97));
	printf("strchr = %p / ft_strchr = %p\n", strchr(chr, 0), ft_strchr(chr, 0));
	//printf("strchr = %p / ft_strchr = %p\n", strchr(0, 114), ft_strchr(0, 114));
	printf("strchr = %p\n", ft_strchr(0, 114));
	//printf("strchr = %p / ft_strchr = %p\n", strchr(chrt, 0), ft_strchr(chrt, 0));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	// FT_STRRCHR
	
	printf("\033[0;32m");
	printf("FT_STRRCHR\n");
	printf("\033[0m");
	
	char *chr = "Hello world";
	char chrt[5] = {'a', 'b', 'c', 'd', 'e'};
	printf("strrchr = %p / ft_strrchr = %p\n", strrchr(chr, 108), ft_strrchr(chr, 108));
	printf("strrchr = %p / ft_strrchr = %p\n", strrchr(chr, 97), ft_strrchr(chr, 97));
	printf("strrchr = %p / ft_strrchr = %p\n", strrchr(chr, 0), ft_strrchr(chr, 0));
	//printf("strrchr = %p / ft_strrchr = %p\n", strrchr(0, 114), ft_strrchr(0, 114));
	printf("strrchr = %p\n", ft_strrchr(0, 114));
	printf("strrchr = %p / ft_strrchr = %p\n", strrchr(chrt, 0), ft_strrchr(chrt, 0));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

	// FT_STRNCMP
/*	
	printf("\033[0;32m");
	printf("FT_STRNCMP\n");
	printf("\033[0m");
	
	char *s1 = "test\200";
	char *s2 = "test\0";

	printf("strncmp() = %d / ft_strncmp() = %d\n", strncmp(s1, s2, 6), ft_strncmp(s1, s2, 6));
	printf("ft_strncmp() = %d\n", ft_strncmp(0, s2, 5));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");

*/
/*
	// FT_MEMCHR
	printf("\033[0;32m");
	printf("FT_STRNCMP\n");
	printf("\033[0m");
	
	char ph[10] = {'d', 'P', '5', '\0', '%', '=', '\t', '\n', 'q', 't'};
	printf("memchr() = %p / ft_memchr() = %p\n", memchr((const void *) ph, 116, 0), ft_memchr((const void *) ph, 116, 0));
	printf("memchr() = %p / ft_memchr() = %p\n", memchr((const void *) ph, -125, 10), ft_memchr((const void *) ph, -125, 10));
	printf("memchr() = %p / ft_memchr() = %p\n", memchr((const void *) ph, 0, 10), ft_memchr((const void *) ph, 0, 10));
	printf("memchr() = %p / ft_memchr() = %p\n", memchr((const void *) ph, 9, 10), ft_memchr((const void *) ph, 9, 10));
	printf("memchr() = %p / ft_memchr() = %p\n", memchr((const void *) ph, 1564, 10), ft_memchr((const void *) ph, 1564, 10));
	printf("ft_memchr() = %p\n", ft_memchr(0, 1564, 10));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	// FT_MEMCMP
	
	printf("\033[0;32m");
	printf("FT_MEMCMP\n");
	printf("\033[0m");
	
	char *s1 = "hello";
	char *s2 = "hellx";

	printf("memcmp() = %d / ft_memcmp() = %d\n", memcmp(s1, s2, 65), ft_memcmp(s1, s2, 65));
	printf("ft_memcmp() = %d\n", ft_strncmp(0, 0, 0));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");

*/

/*
	// FT_STRNSTR
	
	printf("\033[0;32m");
	printf("FT_MEMCMP\n");
	printf("\033[0m");

	const char *big = "lorem ipsum dolor sit amet";
    const char *lit = "dolor";
    char *ptr, *ptr1;

    ptr = strnstr(big, lit, 15);
    ptr1 = ft_strnstr(big, lit, 15);
	printf("strnstr() = %p / ft_strnstr() = %p\n", ptr, ptr1);



	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	// FT_ATOI
	
	printf("\033[0;32m");
	printf("FT_ATOI\n");
	printf("\033[0m");

	printf("atoi() = %d / ft_atoi() = %d\n", atoi("127"), ft_atoi("127"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("    127"), ft_atoi("    127"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("  \t\n\v\r-127"), ft_atoi("  \t\n\v\r-127"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("     --127"), ft_atoi("     --127"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("   -127987"), ft_atoi("   -127987"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("+0de"), ft_atoi("+0de"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("+a12de"), ft_atoi("+a12de"));
	printf("atoi() = %d / ft_atoi() = %d\n", atoi("123456789"), ft_atoi("123456789"));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	//FT_CALLOC

	printf("\033[0;32m");
	printf("FT_ATOI\n");
	printf("\033[0m");

	size_t count = 12;
	size_t size = 2;
	char *cal = (char *) calloc(count, size);
	char *ft_cal = (char *) ft_calloc(count, size);
	for (size_t i = 0; i < count*size; i++)
		printf("%d", cal[i]);
	printf("\n");
	for (size_t i = 0; i < count*size; i++)
		printf("%d", ft_cal[i]);
	printf("\n");

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

	//FT_STRDUP
/*
	printf("\033[0;32m");
	printf("FT_STRDUP\n");
	printf("\033[0m");

	char *s1 = "Hello world";
	char *man = strdup(s1);
	char *moi = ft_strdup(s1);
	printf("strdup() = %p - %s / ft_strdup() = %p - %s\n", man, man, moi, moi);

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/
/*
	//FT_SUBSTR
	printf("\033[0;32m");
	printf("FT_SUBSTR\n");
	printf("\033[0m");

	char str[] = "lorem ipsum dolor sit amet";
	char *strsub;

	if (!(strsub = ft_substr(str, 0, 10)))
		ft_print_result("NULL");
	else
		ft_print_result(strsub);
	if (str == strsub)
		ft_print_result("\nA new string was not returned");

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/
/*
	//FT_STRJOIN
	printf("\033[0;32m");
	printf("FT_STRJOIN\n");
	printf("\033[0m");
	
	//char *s1 = "hello";
	//char *s2 = " world";
	printf("%s\n", ft_strjoin(0, 0));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

/*
	//FT_STRTRIM
	printf("\033[0;32m");
	printf("FT_STRTRIM\n");
	printf("\033[0m");

	char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	char *set = "et";
	//char *res = ft_strtrim(s1, set);
	//ft_print_result(res);
	printf("%s\n", ft_strtrim(s1, set));

	printf("\033[0;32m");
	printf("----------------------------------------\n\n");
	printf("\033[0m");
*/

	return (0);
}
