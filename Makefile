
SRCS	= 	$(addprefix srcs/ft_ctype/, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c)\
			$(addprefix srcs/ft_mem/, ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c)\
			$(addprefix srcs/ft_string/, ft_strlen.c ft_strlcpy.c ft_strlcat.c\
										ft_toupper.c ft_tolower.c\
										ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c\
										ft_atoi.c ft_itoa.c\
										ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
										ft_strmapi.c ft_striteri.c)\
			$(addprefix srcs/ft_stdio/, ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c)\
			$(addprefix srcs/ft_lst/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			 						  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)

HEADER	= ./headers/

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} 

all:	${NAME}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
