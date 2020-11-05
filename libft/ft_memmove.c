/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:31 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:31 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n){
    unsigned char		*strdest;
    const unsigned char	*strsrc;
    size_t				i;

    i = 0;
    strsrc = (unsigned char *)src;
    strdest = (unsigned char *)dest;
    if (strdest == (void *)0 && strsrc == (void *)0)
        return ((void *)0);
    if (strsrc < strdest)
        while (i++ < n)
            strdest[n - i] = strsrc[n - i];
    else
        while (n--)
            *(strdest++) = *(strsrc++);
    return (dest);
}