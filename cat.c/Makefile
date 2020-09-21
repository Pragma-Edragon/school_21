# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/27 16:22:02 by ekandaq           #+#    #+#              #
#    Updated: 2020/07/28 18:17:07 by ekandaq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
C_FILES = cat.c ft_functions.c
C_FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean

all:
	@gcc $(C_FLAGS) -o $(NAME) $(C_FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
