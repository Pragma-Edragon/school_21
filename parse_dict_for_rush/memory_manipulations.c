/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_manipulations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:04:11 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 20:45:22 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	mem_alloc_loop(char *copy, int *alloc, int *allocker)
{
	while (*copy != '\n')
	{
		while (*copy >= '0' && *copy <= '9')
		{
			*alloc += 1;
			copy++;
		}
		while (*copy == 32 || *copy == 58)
			copy++;
		while (*copy != '\n' && *copy != '\0')
		{
			*allocker += 1;
			copy++;
		}
	}
}

void	allocate_memory(t_struct **dict, char *copy, int size)
{
	int alloc;
	int allocker;
	int iter;

	iter = 0;
	while (iter < size && *copy != '\0')
	{
		alloc = 0;
		allocker = 0;
		mem_alloc_loop(copy, &alloc, &allocker);
		copy++;
		(*(dict) + iter)->value = (char*)malloc(alloc * sizeof(char*) + 1);
		(*(dict) + iter)->key = (char*)malloc(alloc * sizeof(char*) + 1);
		iter++;
	}
}

void	pointer_to_start(t_struct **dict, int size)
{
	while (size > 0)
	{
		dict = dict - 1;
		size--;
	}
}

char	*kek(char *copy, int iter, t_struct **dict)
{
	int alloc;
	int allocker;

	alloc = 0;
	allocker = 0;
	while (*copy != '\n')
	{
		while (*copy >= '0' && *copy <= '9')
		{
			(*(dict) + iter)->key[alloc++] = *copy;
			copy++;
		}
		while (*copy == 32 || *copy == 58)
			copy++;
		while (*copy != '\n' && *copy != '\0')
		{
			(*(dict) + iter)->value[allocker++] = *copy;
			copy++;
		}
	}
	(*(dict) + iter)->value[allocker] = '\0';
	(*(dict) + iter)->key[alloc] = '\0';
	return (copy);
}

void	input_data(t_struct **dict, char *copy, int size)
{
	int iter;

	iter = 0;
	while (iter < size && *copy != '\0')
	{
		copy = kek(copy, iter, dict);
		copy++;
		iter++;
	}
}
