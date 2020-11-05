/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:18 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:18 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
    size_t			i;
    unsigned char	*copy;

    i = 0;
    copy = (unsigned char*)arr;
    while (++i <= n)
        if (*(copy++) == (unsigned char)c)
            return ((void*)--copy);
    return (NULL);
}