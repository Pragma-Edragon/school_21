/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:08:14 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 21:05:22 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putstr(char *str)
{
	while (*(unsigned char*)str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_puterror(char *str)
{
	if (ft_atoi(str) < 0)
	{
		ft_putstr("Error\n");
		return ;
	}
}
