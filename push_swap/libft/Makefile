NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isdigit.c ft_bzero.c ft_memset.c ft_memcpy.c \
       ft_strlen.c  ft_strncmp.c ft_split.c ft_strdup.c ft_substr.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ../include/libft.h
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
