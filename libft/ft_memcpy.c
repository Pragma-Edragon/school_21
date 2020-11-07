/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:26 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:26 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;
	size_t			iter;

	strsrc = (unsigned char*)src;
	strdest = (unsigned char*)dest;
	iter = 0;
	if (src == (void*)0 && dest == (void *)0)
		return ((void*)0);
	while (iter < num)
	{
		strdest[iter] = strsrc[iter];
		iter++;
	}
	return ((void *)dest);
}
