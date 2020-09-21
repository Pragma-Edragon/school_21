/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 18:06:17 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/28 22:45:19 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <errno.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>
# define BUF_SIZE 1

int		ft_strcmp(char *str, char *cmp);
void	ft_put_error(char *str);
void	show_file_error(char *file, char *basename);
void	show(int fd, char *file, char *basename);
void	open_and_read(char *file, char *basename);

#endif
