NAME   = libft.a

SRCS   = $(wildcard srcs/*.c)

OBJS   = $(SRCS:.c=.o)

CC     = gcc

CFLAGS = -O3 -Wall -Werror -Wextra -I includes/

RM     = rm -f


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
