NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c		\
		ft_isalnum.c 	\
      	ft_isalpha.c	\
      	ft_isascii.c	\
      	ft_isdigit.c	\
      	ft_isprint.c	\
      	ft_strchr.c		\
      	ft_strlcat.c	\
      	ft_strncmp.c	\
      	ft_strnstr.c	\
      	ft_strrchr.c	\
      	ft_tolower.c	\
      	ft_toupper.c	\
      	ft_strlcpy		\
      	ft_tstrlen		\

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all