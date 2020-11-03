/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:16:53 by ekandaq           #+#    #+#             */
/*   Updated: 2020/10/28 16:16:54 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str, const char *cmp, size_t n){
    size_t iter;
    unsigned char *strcp;
    unsigned char *strcmp;

    if (n == 0)
        return (0);
    strcp = (unsigned char *)str;
    strcmp = (unsigned char *)cmp;
    iter = 0;
    while ((strcp[iter] && strcmp[iter]) && (strcp[iter] == strcmp[iter]) && iter < (n-1))
        iter++;
    return (strcp[iter] - strcmp[iter]);
}
