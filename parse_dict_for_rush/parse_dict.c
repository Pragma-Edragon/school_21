/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:59:54 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 20:40:52 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int				ft_strcmp(char *str, char *cmp)
{
	while (*(unsigned char*)str != '\0' && *(unsigned char*)cmp != '\0')
	{
		if (*str == *cmp)
			break ;
		str++;
		cmp++;
	}
	return (*(unsigned char*)str - *(unsigned char*)cmp);
}

int				amount_of_newlines(char *filename, int *cp_size)
{
	int		fd;
	int		amount;
	char	buf[1];

	amount = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (read(fd, buf, sizeof(buf)))
	{
		if (!(ft_strcmp(buf, "\n")))
			amount++;
		*cp_size += 1;
	}
	close(fd);
	return (amount);
}

char			*write_to_buf(int cp_size, char *filename)
{
	int		fd;
	int		iter;
	char	buf[1];
	char	*copy;

	iter = 0;
	copy = (char*)malloc(cp_size * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (read(fd, buf, sizeof(buf)))
		copy[iter++] = *buf;
	close(fd);
	return (copy);
}

t_struct		*ft_parse(char *filename, int size, int cp_size)
{
	t_struct	*dict;
	char		*copy;

	dict = (t_struct*)malloc(size * sizeof(t_struct));
	copy = write_to_buf(cp_size, filename);
	allocate_memory(&dict, copy, size);
	pointer_to_start(&dict, size);
	input_data(&dict, copy, size);
	free(copy);
	return (dict);
}
