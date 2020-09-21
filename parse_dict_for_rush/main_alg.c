/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:42:58 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 20:42:13 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>

int		get_len(char *num)
{
	int iter;

	iter = 0;
	while (num[iter] != '\0')
		iter++;
	return (iter);
}

int		ft_compare(char *str, char *cmp)
{
	int iter;

	iter = 0;
	while (str[iter] != '\0' && str[iter] == cmp[iter])
		iter++;
	return (str[iter] - cmp[iter]);
}

char	*get_numeric(t_struct *dict, char *number, int size)
{
	size -= 1;
	while (--size > 0)
	{
		if (!(ft_compare(number, (dict + size)->key)))
			return ((dict + size)->value);
	}
	return ((void*)0);
}

void	get_data(t_struct *dict, char *number, int size)
{
	char *buff;

	buff = (char*)malloc(sizeof(char) * 200);
	buff = get_numeric(dict, number, size);
	if (buff != (void *)0)
		ft_putstr(buff);
}
