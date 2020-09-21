/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:37:37 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/29 23:04:30 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(long int num)
{
	char letter;

	if (num < 0)
	{
		num = -num;
		ft_putstr("-");
	}
	if (num / 10)
		ft_putnbr(num / 10);
	letter = num % 10 + '0';
	write(1, &letter, 1);
}

int		ft_norme_symb(char *symb)
{
	if (!(ft_strcmp(symb, "+")))
		return (1);
	else if (!(ft_strcmp(symb, "-")))
		return (2);
	else if (!(ft_strcmp(symb, "/")))
		return (3);
	else if (!(ft_strcmp(symb, "*")))
		return (4);
	else if (!(ft_strcmp(symb, "%")))
		return (5);
	else
		return (0);
}

int		check_symb(char *symb, char *value, long int (*p_atoi)(char *str))
{
	if (!(ft_strcmp(symb, "/")) && p_atoi(value) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (!(ft_strcmp(symb, "%")) && p_atoi(value) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}
