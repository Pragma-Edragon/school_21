// TODO HEADER!!!

#include <stdlib.h>

void *ft_calloc(size_t items, size_t size)
{
    void *pointer;
    size_t iter;

    iter = 0;
    pointer = items == 0 || size == 0 ? (void *)0 : malloc(items * size);
    if (pointer)
    {
        while (iter < items * size)
            *(unsigned char *)(pointer + iter++) = '\0';
        return ((void *)pointer);
    }
    return (pointer);
}