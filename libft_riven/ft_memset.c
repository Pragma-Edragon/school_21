// TODO HEADER!!!

#include "libft.h"

void *ft_memset(void *dest, int ch, size_t n)
{
    size_t iter;
    unsigned char *strdest;
    
    iter = 0;
    strdest = (unsigned char*)dest;
    while (iter < n)
        *(strdest + iter++) = (char)ch;
    return (dest);
}