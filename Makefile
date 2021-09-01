.PHONY: all tests_run clean fclean re

NAME = libft

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = ./main.c \
	./ft_isalpha.c \
	./ft_isdigit.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_strlen.c \
	./ft_memset.c \
	./ft_bzero.c \
	./ft_memcpy.c \
	./ft_memmove.c \
	./ft_strlcpy.c \
	./ft_strlcat.c \
	./ft_toupper.c \
	./ft_tolower.c

 OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) -lbsd $(OBJ)

tests_run: $(NAME)
	@./$(NAME)
	@make fclean

clean:
	rm -rf *.o

fclean:
	rm -rf *.o libft
re:
	make fclean && make all

