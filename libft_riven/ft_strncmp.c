/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:16:53 by ekandaq           #+#    #+#             */
/*   Updated: 2020/10/28 16:16:54 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str, const char *cmp, size_t n){
	int iter;

	iter = 0;
	while (iter < n && str[iter] != '\0' && cmp[iter] != '\0'){
		if ((unsigned char)str[iter] != (unsigned char)cmp[iter])
			return ((unsigned char)str[iter] - (unsigned char)cmp[iter]);
		iter++;
	}
	return ((unsigned char)str[iter] - (unsigned char)str[iter]);
}