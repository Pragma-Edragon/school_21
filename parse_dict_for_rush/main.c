/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:55:59 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 21:07:10 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"


int		main(int argc, char **argv)
{
	int			size;
	int			cp_size;
	char		*filename;
	char		*argument;
	t_struct	*dict;

	size = 0;
	cp_size = 0;
	filename = "numbers.dict";
	argument = "";
	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		argument = argv[1];
		ft_puterror(argv[1]);
		size = amount_of_newlines(filename, &cp_size);
	}
	else if (argc == 3)
	{
		argument = argv[2];
		ft_puterror(argv[2]);
		filename = argv[1];
		size = amount_of_newlines(filename, &cp_size);
	}
	if (size == 0)
		return (0);
	dict = ft_parse(filename, size, cp_size);
	size -= 1;
	get_data(dict, argument, size);
}
