
SRCS	= 	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c

HEADER	= ./

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME	= libft.a

#A SUPPRIMER
RUN		= run

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

# A SUPPRIMER
${RUN}:	cleanRun
		${CC} ${CFLAGS} -o ${RUN} main.c -L. -lft

bonus:	${NAME} ${OBJS_BONUS}
		ar r ${NAME} ${OBJS_BONUS}

clean:
		${RM} ${OBJS}

all:	${NAME}

# A SUPPRIMER
cleanRun:
		${RM} ${RUN}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

# A SUPPRIMER
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
#	gcc -nostartfiles -shared -o libft.so $(OBJS)


.PHONY:	all clean fclean re
