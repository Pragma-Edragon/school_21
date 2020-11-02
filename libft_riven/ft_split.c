// TODO HEADER!!!!

#include <stdlib.h>

int get_num(const char *str, char c)
{
    size_t numb;
    size_t iter;

    numb = 0;
    iter = 0;
    while ((unsigned char)str[iter])
    {
        if ((unsigned char)str[iter] == (unsigned char)c)
            numb++;
        iter++;
    }
    return (numb);
}

char **create_string(char const *s, char c, size_t num)
{
    char **words;

    if (!(words = (char **)malloc(num * sizeof(char *) + 1)))
        return ((void *)0);
    return (words);
}

char *copy_words(char const *s, char *word, size_t jiter)
{
    size_t iter;

    iter = 0;
    while (iter < jiter)
    {
        word[iter] = *(s - jiter + iter);
        iter++;
    }
    word[iter] = '\0';
    return (word);
}

char **create_words(char const *s, char c)
{
    char **words;
    size_t num;
    size_t iter;
    size_t jiter;

    num = get_num(s, c);
    if (!(words = create_string(s, c, num)))
        return ((void *)0);
    iter = 0;
    while (iter < num)
    {
        jiter = 0;
        while (*(unsigned char *)s != (unsigned char)c)
        {
            jiter++;
            s++;
        }
        if (!(words[iter] = (char *)malloc(jiter * sizeof(char) + 1)))
            return ((void *)0);
        words[iter] = copy_words(s, words[iter], jiter);
        s++;
        iter++;
    }
    return (words);
}


char **ft_split(char const *s, char c) {
    char **words;

    if (!s || !*s)
        return ((void *) 0);
    words = create_words(s, c);
    return (words);
}
