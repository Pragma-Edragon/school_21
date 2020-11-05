/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:57 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:50:57 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t			i;
    unsigned char	*strsrc;
    unsigned char	*strdst;

    strsrc = (unsigned char *)src;
    strdst = (unsigned char *)dst;
    if (!strsrc && !strdst)
        return (0);
    i = 0;
    if (size)
    {
        size--;
        while (strsrc[i] && i < size)
        {
            strdst[i] = strsrc[i];
            i++;
        }
        strdst[i] = '\0';
    }
    return (ft_strlen(src));
}
