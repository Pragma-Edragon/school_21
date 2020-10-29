// TODO HEADERS!!!

#include <stdlib.h>

size_t    ft_tstrlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}
