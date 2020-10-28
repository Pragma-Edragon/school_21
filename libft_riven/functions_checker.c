#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_isprint.c"
#include "ft_isascii.c"
#include "ft_isalnum.c"
#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include "ft_atoi.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include <stdio.h>

int main(void) {
    int iter = 0;
    char *str = "WOW RIVEN is so GOOD!";
    char the_chars[] = { 'A', 0x80, 'Z' };
    char *isallnum = "!\"#$%&'()*+,-./0123456789:;"
                     "<=>?@ABCDEFGHIJKLMN"
                     "OPQRSTUVWXYZ[\\]^_"
                     "`abcdefghijklmnopqrstuvwxyz{|}~";

    while (str[iter] != '\0'){
        printf("%c", ft_tolower(str[iter]));
        iter++;
    }
    printf("\n");
    iter = 0;
    while (str[iter] != '\0'){
        printf("%c", ft_toupper(str[iter]));
        iter++;
    }
    iter = 0;
    printf("\n");
    while(iter != 128){
        if (ft_isprint(iter))
            printf("%d \t %c\n", iter, iter);
        iter++;
    }
    iter = 0;
    printf("\n");
    while (iter < 3){
        ft_isascii(iter[the_chars]) ? printf("char: %c\t is ascii: %d\n", iter[the_chars], 1) :
        printf("char: %c\t is ascii: %d\n", iter[the_chars], 0);
        iter++;
    }
    iter = 0;
    printf("\n");
    while (isallnum[iter] != '\0'){
        ft_isalnum(isallnum[iter]) ?
        printf("char %c\t is num\n", isallnum[iter]) :
        printf("char %c\t is mot num\n", isallnum[iter]);
        iter++;
    }
    iter = 0;
    printf("\n");
    while (isallnum[iter] != '\0'){
        ft_isdigit(isallnum[iter]) ?
        printf("char %c\t is digit\n", isallnum[iter]) :
        printf("char %c\t is mot digit\n", isallnum[iter]);
        iter++;
    }
    iter = 0;
    printf("\n");
    while (isallnum[iter] != '\0'){
        if (ft_isalpha(isallnum[iter]))
            printf("char %c\t is alphabetic\n", isallnum[iter]);
        iter++;
    }
    printf("\n");
    printf("%d", ft_atoi("-2147483649"));
	printf("\n");
	char *str_to_cmp = "lol!";
	char *cmp_str = "l2l!";
	printf("%d", ft_strncmp(str_to_cmp, cmp_str, 15));
	printf("\n");
	printf("%s", ft_strnstr("wow riven is so good!", "riven", 13));
}