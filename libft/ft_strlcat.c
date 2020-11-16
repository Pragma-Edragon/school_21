/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:23 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/14 20:22:18 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t					ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dsts;
	size_t		srcs;

	srcs = ft_strlen(src);
	dsts = ft_strlen(dest);
	if (size < dsts + 1)
		return (size + srcs);
	if (size - dsts > 0)
	{
		while (*dest)
			dest++;
		ft_strlcpy(dest, src, size - dsts);
	}
	return (dsts + srcs);
}
