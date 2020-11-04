// TODO HEADER!!!


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t s1len;
    size_t s2len;

    if (!s1 && !s2)
        return (ft_strdup(""));
    else if (!(s1) || !(s2))
        return (!(s2) ? ft_strdup(s1) : ft_strdup(s2));
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    if (!(res = (char *)malloc(sizeof(char) * (s1len + s2len) + 1)))
        return ((void *)0);
    ft_strlcpy(res, s1, s1len + 1);
    ft_strlcat(res + (s1len), s2, s2len + 1);
    return (res);
}