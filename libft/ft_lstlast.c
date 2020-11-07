/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:00 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/07 16:59:42 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *head)
{
	t_list *last_node;

	last_node = head;
	if (head)
		while (last_node->next)
			ast_node = last_node->next;
	return (last_node);
}
