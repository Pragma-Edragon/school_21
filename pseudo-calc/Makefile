# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 16:32:16 by ekandaq           #+#    #+#              #
#    Updated: 2020/07/29 19:40:38 by ekandaq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_NAME = main.c ft_opers.c ft_print.c
ARGS = -Wall -Wextra -Werror
NAME = do-op

.PHONY = all clean fclean

all:
	@gcc $(ARGS) -o $(NAME) $(C_NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
