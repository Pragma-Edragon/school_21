/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:54:29 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:54:29 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *str, char const *set)
{
    size_t	end;

    if (!(str))
        return ((void *)0);
    if (!(set))
        return (ft_strdup(str));
    while (*str && ft_strchr(set, *str))
        str++;
    end = ft_strlen(str);
    while (end && ft_strchr(set, str[end]))
        end--;
    return (ft_substr((char *)str, 0, end + 1));
}
