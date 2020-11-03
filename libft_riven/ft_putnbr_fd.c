// TODO HEADER!!!

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *number;
    long int cp;

    if (fd < 0)
        return ;
    cp = (long int)n;
    number = ft_itoa(cp);
    ft_putstr_fd(number, fd);
    free(number);
}