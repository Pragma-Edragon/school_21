// TODO HEADER!!!

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char *strdest;
    const unsigned char *strsrc;
    size_t i;

    i = 0;
    strsrc = (unsigned char *)src;
    strdest = (unsigned char *)dest;

    if (strsrc < strdest)
        while (i++ < n)
            strdest[n - i] = strsrc[n - i];
    else
        while (n--)
            *(strdest++) = *(strsrc++);
    return (dest);
}