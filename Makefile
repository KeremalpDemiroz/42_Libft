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
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

OBJC=$(SRCS:.c=.o)
all:$(NAME)
$(NAME):$(OBJC)
	ar rcs $(NAME) $(OBJC)
clean:
	rm -rf $(OBJC)

fclean:clean
	rm -rf $(NAME)

re:fclean all

cc: 
	$(CC) $(CFLAGS) $(NAME)

norm:
	norminette $(SRCS)

run:all clean
	clear
	@$(CC) $(CFLAGS) main.c $(NAME)
	@./a.out

.PHONY: all clean fclean re norm run cc 
