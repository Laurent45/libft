
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

HEADER	= ./

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

#A SUPPRIMER
RUN		= run

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

# A SUPPRIMER
${RUN}:	cleanRun
		${CC} ${CFLAGS} -o ${RUN} main.c -L. -lft

clean:
		${RM} ${OBJS}

all:	${NAME}

# A SUPPRIMER
cleanRun:
		${RM} ${RUN}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
