/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 18:10:13 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/28 22:54:25 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_strcmp(char *str, char *cmp)
{
	int	i;

	i = 0;
	while (str[i] == cmp[i] && str[i] != '\0' && cmp[i] != '\0')
		i++;
	return ((unsigned char)str[i] - (unsigned char)cmp[i]);
}

void	ft_put_error(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	show_file_error(char *file, char *basename)
{
	ft_put_error(basename);
	ft_put_error(": ");
	ft_put_error(file);
	ft_put_error(": ");
	ft_put_error(strerror(errno));
	ft_put_error("\n");
	errno = 0;
}

void	show(int fd, char *file, char *basename)
{
	char	buf[BUF_SIZE];

	while (read(fd, buf, sizeof(buf)))
	{
		write(1, buf, sizeof(buf));
		if (errno)
		{
			show_file_error(file, basename);
			return ;
		}
	}
}

void	open_and_read(char *file, char *basename)
{
	int fd;

	if (!(ft_strcmp(file, "-")))
	{
		fd = 0;
		show(fd, file, basename);
	}
	else
	{
		fd = open(file, O_RDONLY);
		if (errno)
		{
			show_file_error(file, basename);
			return ;
		}
		show(fd, file, basename);
		close(fd);
	}
}
