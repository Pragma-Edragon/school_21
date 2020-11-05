/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:21:16 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 18:43:11 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **head, t_list *new)
{
	t_list *last_node;

	if (head)
	{
		if (!*head)
			*head = new;
		else
		{
			last_node = ft_lstlast(*(head));
			last_node->next = new;
		}
	}
}
