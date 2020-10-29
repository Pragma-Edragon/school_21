// TODO HEADER!!!

int ft_get_strlen(const char *str){
    int iter;

    iter = 0;
    while (str[iter] != '\0')
        iter++;
    return (iter);
}

char *ft_strrchr(const char *str, int ch){
    int len;

    len = ft_getlen(str);
    while (len-- != 0){
        if ((int)str[len] == (int)ch)
            return ((char *)str + len);
    }
    return ((void *)0);
}