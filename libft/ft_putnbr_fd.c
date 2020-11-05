/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:47 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 16:37:57 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	char		letter;
	long long	cp;

	cp = (long long)n;
	if (cp < 0)
	{
		cp *= -1;
		write(1, "-", 1);
	}
	if (cp/10)
		ft_putnbr_fd(cp/10, fd);
	letter = cp % 10 + '0';
	write(fd, &letter, sizeof(letter));
}

