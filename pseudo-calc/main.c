/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:34:55 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/29 23:32:56 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

long int	ft_atoi(char *str)
{
	long int	min_count;
	long int	dig;

	dig = 0;
	min_count = 0;
	while ((*str > 6 && *str < 14) || *str == 32)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			min_count++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		dig = (dig * 10) + *str - '0';
		str++;
	}
	if (min_count % 2 != 0)
		return (-dig);
	else
		return (dig);
}

int			ft_strcmp(char *str, char *cmp)
{
	while (*(unsigned char*)str != '\0' && *(unsigned char*)cmp != '\0')
	{
		if (*str != *cmp)
			break ;
		str++;
		cmp++;
	}
	return (*(unsigned char*)str - *(unsigned char*)cmp);
}

int			main(int argc, char **argv)
{
	long int	(*p_atoi)(char *str);
	long int	(*operators[OP_SIZE])(long int, long int);

	operators[0] = ft_sum;
	operators[1] = ft_subtr;
	operators[2] = ft_division;
	operators[3] = ft_multp;
	operators[4] = ft_modulo;
	p_atoi = ft_atoi;
	if (argc != 4)
		return (0);
	if (!(ft_norme_symb(argv[2])))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (!(check_symb(argv[2], argv[3], p_atoi)))
		return (0);
	ft_putnbr((*operators[ft_norme_symb(argv[2]) - 1])(
				p_atoi(argv[1]), p_atoi(argv[3])));
	ft_putstr("\n");
}
