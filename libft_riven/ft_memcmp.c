// TODO HEADER!!!

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n){
    while (*(unsigned char *)str1 && *(unsigned char *)str2 && n){
        if (*(unsigned char *)str1 != *(unsigned char *)str2)
            return (*(unsigned char *)str1 - *(unsigned char *)str2);
        n--;
        str1++;
        str2++;
    }
    return (*(unsigned char *)str1 - *(unsigned char *)str2);
}