// TODO HEADER!!!

#include <stdlib.h>

char *ft_strtrim(char const *str, char const *set)
{
    size_t end;
    char *sub;

    if (!(str))
        return ((void *)0);
    if (!(set))
        return (ft_strdup(str));
    while (*str && ft_strchr(set, *str))
        str++;
    end = ft_strlen(str);
    while (end && ft_strchr(set, str[end]))
        end--;
    sub = ft_substr((char *)str, 0, end + 1);
    return (sub);
}