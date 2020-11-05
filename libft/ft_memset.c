/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:35 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:35 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *dest, int ch, size_t n)
{
    size_t			iter;
    unsigned char	*strdest;
    
    iter = 0;
    strdest = (unsigned char*)dest;
    while (iter < n)
        *(strdest + iter++) = (char)ch;
    return (dest);
}