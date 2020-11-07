/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:05 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 17:02:42 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *head;

	if (!content)
		return ((void *)0);
	if (!(head = (t_list *)malloc(sizeof(t_list))))
		return ((void *)0);
	head->content = content;
	head->next = (void *)0;
	return (head);
}
