// TODO HEADER!!!

#include "libft.h"

void ft_lstadd_front(t_list **head, t_list *new)
{
    if (!head || !new)
        return ;
    new->next = *head;
    *head = new;
}