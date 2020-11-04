// TODO HEADER!!!!

#include "libft.h"

size_t words_amount(char const *s, char c)
{
    size_t amount;
    size_t iter;

    iter = 0;
    amount = 0;
    while (s[iter])
    {
        if (s[iter] != (unsigned char)c && s[iter])
            amount++;
        while (s[iter] != (unsigned char)c && s[iter])
            iter++;
        iter++;
    }
    return (amount);
}

char *allocate_memory_for_word(char const *s, char c)
{
    size_t amount;
    char *word;

    amount = 0;
    while (*s && *s != (unsigned char)c)
    {
        amount++;
        s++;
    }
    word = (char *)malloc(sizeof(char) * amount + 1);
    return (word);
}

char **memory_allocation_for_string(char const *s, char c, size_t words_amount)
{
    char **words;
    size_t amount;
    int key;

    if (!(words = (char **)malloc(sizeof(char *) * words_amount + 1)))
        return ((void *)0);
    amount = 0;
    while (amount < words_amount)
    {
        while (*s && *s == (unsigned char)c)
            s++;
        words[amount] = allocate_memory_for_word(s, c);
        while (*s && *s != (unsigned char)c)
            s++;
        amount++;
    }
    return (words);
}

char **fill_string_by_chars(char const *s, char c, char **words, size_t amount)
{
    size_t iter;
    size_t jiter;

    iter = 0;
    while (iter < amount)
    {
        jiter = 0;
        while (*s && *s == c)
            s++;
        while (*s && *s != c)
        {
            words[iter][jiter] = *s;
            jiter++;
            s++;
        }
        words[iter][jiter] = '\0';
        iter++;
    }
    *(words + iter) = (void *)0;
    return (words);
}

char **ft_split(char const *s, char c) {
    char **words;
    size_t amount;

    if (!s || !*s)
        return ((void *) 0);
    amount = words_amount(s, c);
    words = memory_allocation_for_string(s, c, amount);
    return(fill_string_by_chars(s, c, words, amount));
}
