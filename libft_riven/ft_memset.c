// TODO HEADER!!!

#include <stdlib.h>

void *ft_memset(void *dest, int ch, size_t n)
{
    size_t iter;
    unsigned char *strdest;

    if (!n)
        return ((void *)0);
    iter = 0;
    strdest = (unsigned char*)dest;
    while (iter < n)
        *(strdest + iter++) = (char)ch;
    return (dest);
}