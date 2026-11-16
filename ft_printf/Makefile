NAME= libftprintf.a

WFLAGS= -Wall -Wextra -Werror
HEADER= include/ft_printf.h

SRCS = srcs/ft_printf.c \
		srcs/helpers/ft_putchar.c \
		srcs/helpers/ft_putstr.c \
		srcs/helpers/ft_putnbr.c \
		srcs/helpers/ft_putadd.c \
		srcs/helpers/ft_puthex.c \
		srcs/helpers/ft_putunsgd.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	cc $(WFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
