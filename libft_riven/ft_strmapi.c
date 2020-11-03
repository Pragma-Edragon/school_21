// TODO HEADERS!!!

#include "libft.h"

char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    char *new;
    size_t len;
    size_t iter;

    if (!str || !*str)
        return ((void *)0);
    len = ft_strlen(str);
    if (!(new = (char *)malloc(sizeof(char) * len + 1)))
        return ((void *)0);
    iter = 0;
    while (iter < len)
    {
        new[iter] = (*f)(iter, str[iter]);
        iter++;
    }
    new[iter] = '\0';
    return (new);
}