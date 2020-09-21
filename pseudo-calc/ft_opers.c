/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:36:10 by ekandaq           #+#    #+#             */
/*   Updated: 2020/07/29 23:03:03 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

long int	ft_sum(long int v1, long int v2)
{
	return (v1 + v2);
}

long int	ft_subtr(long int v1, long int v2)
{
	return (v1 - v2);
}

long int	ft_division(long int v1, long int v2)
{
	return (v1 / v2);
}

long int	ft_multp(long int v1, long int v2)
{
	return (v1 * v2);
}

long int	ft_modulo(long int v1, long int v2)
{
	return (v1 % v2);
}
