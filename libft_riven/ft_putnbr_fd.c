/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:47 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:47 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
    char		*number;
    long int	cp;

    if (fd < 0)
        return ;
    cp = (long int)n;
    number = ft_itoa(cp);
    ft_putstr_fd(number, fd);
    free(number);
}