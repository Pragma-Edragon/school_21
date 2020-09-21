/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 17:06:33 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/29 23:04:00 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define OP_SIZE 5
# include <unistd.h>

long int	ft_modulo(long int v1, long int v2);
long int	ft_multp(long int v1, long int v2);
long int	ft_division(long int v1, long int v2);
long int	ft_subtr(long int v1, long int v2);
long int	ft_sum(long int v1, long int v2);
long int	ft_atoi(char *str);
void		ft_putstr(char *str);
void		ft_putnbr(long int num);
int			ft_norme_symb(char *symb);
int			ft_strcmp(char *str, char *cmp);
int			check_symb(char *symb, char *value, long int (*p_atoi)(char *str));

typedef enum
{
	FALSE,
	TRUE
}	t_bool;

#endif
