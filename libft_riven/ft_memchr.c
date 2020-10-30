// TODO HEADER!!!

#include <stdlib.h>

void *ft_memchr(const void *arr, int c, size_t n){

    if (arr == (void *)0)
        return ((void *)0);
    while (*(unsigned char *)arr && n){
        if (*(unsigned char *)arr == c)
            return ((char *)arr);
        n--;
        arr++;
    }
    return ((void *)0);
}