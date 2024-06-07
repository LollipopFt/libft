CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_memchr.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_bzero.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strnstr.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	cc -c $(CFLAGS) -O3 $<

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
