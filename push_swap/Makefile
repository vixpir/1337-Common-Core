NAME= push_swap
CFLAGS= -Wall -Wextra -Werror

LIBFT_DIR= libft
LIBFT= $(LIBFT_DIR)/libft.a

SRCS= src/push_swap.c \
		src/parse/parse_flag.c src/parse/parse_args.c src/parse/parse_int.c \
		src/stack/append_node.c src/stack/assign_indices.c \
		src/stack/free_stack.c src/stack/has_duplicate.c \
		src/ops/op_push.c src/ops/op_swap.c src/ops/op_rotate.c src/ops/op_rev_rotate.c \
		src/utils/disorder.c \

OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c include/push_swap.h
	cc $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re