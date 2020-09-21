/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:56:17 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/02 21:03:46 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_struct
{
	char			*key;
	char			*value;
}					t_struct;

int					amount_of_newlines(char *filename, int *cp_size);
int					ft_strcmp(char *str, char*cmp);
void				ft_putstr(char *str);
void				pointer_to_start(t_struct **dict, int size);
void				input_data(t_struct **dict, char *copy, int size);
void				allocate_memory(t_struct **dict, char *copy, int size);
char				*write_to_buf(int cp_size, char *filename);
t_struct			*ft_parse(char *filename, int size, int cp_size);

char				*get_bufer(char *str, int start, int end);
int					get_len(char *num);
void				pointer_to_end(char **number);
int					ft_compare(char *str, char *cmp);
void				get_data(t_struct *dict, char *number, int size);
char				*kek(char *copy, int iter, t_struct **dict);
void				mem_alloc_loop(char *copy, int *alloc, int *allocker);
int					ft_atoi(char *str);
void				ft_puterror(char *str);

#endif
