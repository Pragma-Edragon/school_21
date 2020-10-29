// TODO HEADER!!!

int ft_nullb_str_len(const char *str){
    int iter;

    iter = 0;
    while ((unsigned char)str[iter] != '\0')
        iter++;
    return (iter + 1);
}

char *ft_strchr(const char *str, int symb){
    int len;
    int iter;

    iter = 0;
    len = ft_nullb_str_len(str);
    while (iter != len){
        if ((unsigned char)str[iter] == (unsigned char)symb)
            return ((char *)str + iter);
        iter++;
    }
    return ((void *)0);
}