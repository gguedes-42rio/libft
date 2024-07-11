NAME       = a.out

SRCS       = $(wildcard srcs/*.c)

OBJS       = $(SRCS:.c=.o)

LIBFT_PATH = ..

LIBFT      = $(LIBFT_PATH)/libft.a

CC         = gcc

CFLAGS     = -Wall -Wextra -Werror

RM         = rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -lcriterion $(OBJS) $(LIBFT) -o $(NAME)
	./$(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
