/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:19:57 by ekandaq           #+#    #+#             */
/*   Updated: 2020/10/28 15:19:58 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str){
	int		key;
	int		res;

	res = 0;
	while (*str == 32)
		str++;
	key = *str == '-' ? 1 : 0;
	if (key || *str == '+')
		str++;
	while (*str){
		if (*str >= 48 && *str <= 57)
			res = res * 10 + *str - '0';
		else
			return (0);
		str++;
	}
	return key == 1 ? res * -1 : res;
}