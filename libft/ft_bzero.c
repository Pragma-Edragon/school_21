/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:46:47 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:46:47 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n){
    unsigned char	*strcpy;
    size_t			iter;

    if (!n)
        return ;
    strcpy = s;
    iter = 0;
    while (iter < n)
        strcpy[iter++] = 0;
}