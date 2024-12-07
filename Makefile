SRCS = ft_putchar.c ft_putnbr.c ft_putnumber_base.c ft_putstr.c \
       ft_puthex.c ft_puthex_uppercase.c ft_putpointer.c ft_printf.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re

