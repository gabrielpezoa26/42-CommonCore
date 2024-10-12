NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = $(SRC:.c=.o)
 
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c includes/%.h
	$(CC) $(CFLAGS) -c $^ -o $@

norm:
	norminette -SourceForbiddenHeader

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
