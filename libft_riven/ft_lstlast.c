// TODO HEADERS!!!

#include "libft.h"

t_list *ft_lstlast(t_list *head)
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