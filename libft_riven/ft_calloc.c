// TODO HEADER!!!

#include "libft.h"

void *ft_calloc(size_t items, size_t size)
{
    void *pointer;

    if (!(pointer = malloc(items * size)))
        return ((void *)0);
    ft_bzero(pointer, (items * size));
    return (pointer);
}
