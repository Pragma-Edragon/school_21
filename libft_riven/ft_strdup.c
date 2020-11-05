/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:12 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:50:12 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *copy;
    size_t iter;

    if (!(copy = (char *)malloc(ft_strlen(str) * sizeof(const char) + 1)))
        return ((void *)0);
    iter = 0;
    while ((unsigned char)str[iter] != '\0')
    {
        copy[iter] = str[iter];
        iter++;
    }
    copy[iter] = '\0';
    return (copy);
}