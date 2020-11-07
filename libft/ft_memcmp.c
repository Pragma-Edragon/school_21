/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:49:22 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:49:22 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1cp;
	unsigned char	*str2cp;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	str1cp = (unsigned char *)str1;
	str2cp = (unsigned char *)str2;
	while (str1cp[i] == str2cp[i] && i < n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((int)(str1cp[i] - str2cp[i]));
}
