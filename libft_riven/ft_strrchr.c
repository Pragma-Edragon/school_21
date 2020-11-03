// TODO HEADER!!!

#include "libft.h"

char *ft_strrchr(const char *str, int ch){
    int len;

    len = ft_strlen(str);
    while (len != 0){
        if ((int)str[len] == (int)ch)
            return ((char *)str + len);
        len--;
    }
    return (str[len] == ch? (char *)str + len : (void *)0);
}