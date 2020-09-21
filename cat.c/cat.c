/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:29:18 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/28 22:55:41 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		counter;

	if (argc == 1)
	{
		fd = 0;
		show(fd, 0, 0);
		return (0);
	}
	counter = 0;
	while (++counter < argc)
	{
		open_and_read(argv[counter], basename(argv[0]));
	}
}
