// TODO HEADER!!!

#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *substring;
    size_t iter;

    if (!str)
        return ((void *)0);
    if (ft_strlen(str) < start)
        return (ft_strdup(""));
    if (!(substring = (char *)malloc(len + sizeof(char))))
        return ((void *)0);
    iter = 0;
    while (iter < len && *(str + iter + start))
    {
        *(substring + iter) = *(str + start + iter);
        iter++;
    }
    *(substring + iter) = '\0';
    return (substring);
}