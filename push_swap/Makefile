NAME= 
CFLAGS= -Wall -Wextra -Werror

SRCS= 

OBJS= (SRCS)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c # HEADER
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
