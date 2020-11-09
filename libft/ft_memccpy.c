/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:14 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:14 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src,
					int ch, size_t count)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;
	size_t			iter;

	strsrc = (unsigned char *)src;
	strdest = (unsigned char *)dest;
	iter = 0;
	while (iter < count)
	{
		strdest[iter] = strsrc[iter];
		if (strdest[iter] == (unsigned char)ch)
			return ((void*)(dest + iter + 1));
		++iter;
	}
	return ((void*)0);
}
