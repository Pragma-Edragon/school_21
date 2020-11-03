#ifndef LIFBT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
    void			*content;
    struct s_list	*next;
}					t_list;

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t items, size_t size);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int ft_isascii(int arg);
int ft_isdigit(int arg);
int ft_isprint(int arg)
char *ft_itoa(int n);
void ft_lstadd_front(t_list **head, t_list *new);
t_list *ft_lstlast(t_list *head);
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *head);
void *ft_memccpy(void *dest, const void *src, int ch, size_t count);
void *ft_memchr(const void *arr, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t num);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *dest, int ch, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int symb);
char *ft_strdup(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t    ft_strlen(const char *s);
char *ft_strmapi(char const *str, char (*f)(unsigned int, char));
int ft_strncmp(const char *str, const char *cmp, size_t n);
char *ft_strnstr(const char *arg, const char *cmp, int len);
char *ft_strrchr(const char *str, int ch);
char *ft_strtrim(char const *str, char const *set);
char *ft_substr(char const *str, unsigned int start, size_t len);
int ft_tolower(int arg);
int ft_toupper(int arg);

#endif