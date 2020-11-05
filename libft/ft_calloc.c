/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:47:19 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 18:38:27 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	void *pointer;

	if (!(pointer = malloc(items * size)))
		return ((void *)0);
	ft_bzero(pointer, (items * size));
	return (pointer);
}
