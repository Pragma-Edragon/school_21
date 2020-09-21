/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 20:52:09 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 21:07:54 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_atoi(char *str)
{
	int res;
	int key;

	res = 0;
	key = 0;
	if (res < 0)
	{
		key = 1;
		res = -res;
	}
	while (*str != '\0')
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	if (key)
		return (-res);
	else
		return (res);
}
