// TODO HEADER!!!

#include "libft.h"

void *ft_memccpy(const void *dest, const void *src, int ch, size_t count)
{
    unsigned char *strdest;
    unsigned char *strsrc;
    size_t iter;

    strsrc = (unsigned char *)src;
    strdest = (unsigned char *)dest;
    iter = 0;
    while (iter < count){
        strdest[iter] = strsrc[iter];
        if (strdest[iter] == ch)
            return ((void*)(dest + iter + 1));
        iter++;
    }
    return ((void*)0);
}