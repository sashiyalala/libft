CC = cc
CFLAGS += -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f

MY_SRCS = ${wildcard *.c}  # TODO: Change to static names
MY_OBJS = $(MY_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJS)
	ar rcs $(NAME) $(MY_OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re