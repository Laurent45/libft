
SRCS_DIR = ./srcs
SRCS = $(shell find $(SRCS_DIR) -name '*.c')

HEADER_DIR = $(shell find $(SRCS_DIR) -name 'headers' -type d)
HEADERS_FLAGS = $(addprefix -I,$(HEADER_DIR))

BUILD_DIR = ./build
OBJS	= $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS = $(OBJS:.o=.d)

NAME	= libft.a

CC		= gcc

RM		= rm -f
RMDIR = rm -Rf

CFLAGS	= -Wall -Wextra -Werror -MMD -MP

$(BUILD_DIR)/%.c.o: %.c
	@mkdir -p $(dir $@)
	@printf "[+] Creating object files\r"
	@$(CC) $(CFLAGS) $(HEADERS_FLAGS) -c $< -o $@
	@printf "[x] Creating object files\r"

$(NAME): $(OBJS)
		@printf "\nObject files created\n"
		@ar rcs $(NAME) $(OBJS)
		@printf "Libft librairy compiled\n"

clean:
		$(RMDIR) $(BUILD_DIR) 

all:	$(NAME)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
-include $(DEPS)
