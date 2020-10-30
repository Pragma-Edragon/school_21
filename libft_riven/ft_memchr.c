// TODO HEADER!!!

#include <stdlib.h>

void *ft_memchr(const void *arr, int c, size_t n){
    while (*(unsigned char *)arr && n){
        if (*(unsigned char *)arr == c)
            return ((void *)arr);
        n--;
        arr++;
    }
    return ((void *)0);
}