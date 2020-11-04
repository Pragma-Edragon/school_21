// TODO HEADER!!!

#include "libft.h"

t_list *ft_lstnew(void *content)
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