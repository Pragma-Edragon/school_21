// TODO HEADER!!!

#include <stdlib.h>

int get_num_len(int number)
{
    long int iter;

    iter = 0;
    while (number != 0)
    {
        number /= 10;
        ++iter;
    }
    return (iter);
}

char *ft_itoa(int n)
{
    char *number;
    size_t len;
    long int cp;

    len = n < 0 ? get_num_len(n) + 1: get_num_len(n);
    if (!(number = (char *)malloc(len * sizeof(char) + 1)))
        return ((void *)0);
    ft_bzero(number, len + 1);
    if (n < 0)
        *(number + 0) = '-';
    cp = n < 0 ? (long int)n * -1 : (long int)n;
    len -= 1;
    while (cp != 0){
        number[len--] = cp % 10 + '0';
        cp /= 10;
    }
    return (number);
}