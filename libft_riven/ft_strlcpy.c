// TODO HEADER!!!

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    unsigned char *strsrc;
    unsigned char *strdst;

    strsrc = (unsigned char *)src;
    strdst = (unsigned char *)dst;
    if (!strsrc && !strdst)
        return (0);
    i = 0;
    if (size)
    {
        size--;
        while (strsrc[i] && i < size)
        {
            strdst[i] = strsrc[i];
            i++;
        }
        strdst[i] = '\0';
    }
    return (ft_strlen(src));
}
