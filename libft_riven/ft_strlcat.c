// TODO HEADER!!!

#include <stdlib.h>

size_t    ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dlen;
    size_t  i;

    i = 0;
    dlen = ft_strlen(dst);

    if (!src || !*src)
        return dlen;
    while (i++ < size - dlen - 1 && src[i])
        dst[i + dlen] = src[i];
    dst[i + dlen] = 0;

    return i + dlen;
}