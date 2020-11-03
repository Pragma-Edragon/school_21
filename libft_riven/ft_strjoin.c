// TODO HEADER!!!


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *string;
    size_t s1len;
    size_t s2len;

    if (!s1 && !s2)
        return (ft_strdup(""));
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    if (!(string = (char*)malloc((s1len + s2len) * sizeof(char) + 1)))
        return ((void *)0);
    string = (char *)ft_memcpy(string, s1, s1len);
    string += s1len;
    string = (char *)ft_memcpy(string, s2, s2len);
    *(string + s2len) = '\0';
    return (string);
}