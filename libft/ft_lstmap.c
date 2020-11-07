/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:04:50 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/07 16:43:31 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *cp;
	t_list *new;
	t_list *head;

	cp = lst;
	if (lst)
	{
		cp = lst;
		if (!(head = ft_lstnew((*f)(cp->content))))
			return ((void *)0);
		while (cp)
		{
			if (!(new = ft_lstnew((*f)(cp->content))))
			{
				ft_lstclear(&head, del);
				return ((void *)0);
			}
			ft_lstadd_back(&head, new);
			cp = cp->next;
		}
		return (head);
	}
	return ((void *)0);
}