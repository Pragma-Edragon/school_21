// TODO HEADER!!!

#include "libft.h"

int ft_lstsize(t_list *head)
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