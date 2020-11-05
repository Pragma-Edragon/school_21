/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:10 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:10 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *head)
{
    unsigned int iter;

    if (!head)
        return (0);
    iter = 0;
    while (head)
    {
        iter++;
        head = head->next;
    }
    return (iter);
}