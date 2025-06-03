NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr\
		ft_strncmp\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c

OBJC=$(SRCS:.c=.o)
all:$(NAME)
$(NAME):$(OBJC)
	ar rc $(NAME) $(OBJC)
clean:
	rm -rf $(OBJC)

fclean:clean
	rm -rf $(NAME)

re:fclean all

cc: 
	$(CC) $(CFLAGS) main.c $(NAME)

norm:
	norminette ft_*.c

.PHONY: all clean fclean re 
