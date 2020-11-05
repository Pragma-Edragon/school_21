/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:53:34 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 18:14:03 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void*))
{
	t_list *created;

	if (head)
	{
		while(*head)
		{
			created = (*head)->next;
			(del)(*head);
			*head = created;
		}
	}
}