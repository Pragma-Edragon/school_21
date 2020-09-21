# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/01 13:39:02 by ekandaq           #+#    #+#              #
#    Updated: 2020/08/02 21:04:36 by ekandaq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN_NAME = rush-02
C_NAME = main.c parse_dict.c ft_print.c memory_manipulations.c main_alg.c ft_atoi.c
C_FLAGS = -Wall -Wextra -Werror

.PHONY: all clcean fclean

all:
	@gcc $(C_FLAGS) -o $(BIN_NAME) $(C_NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(BIN_NAME)
