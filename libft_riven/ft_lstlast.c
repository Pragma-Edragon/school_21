/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:00 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:00 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *head)
{
    t_list *last_node;

    while (head)
    {
        if (head->next == (void *)0)
            last_node = head;
        head = head->next;
    }
    return (last_node);
}