/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:45:48 by ekandaq           #+#    #+#             */
/*   Updated: 2020/10/28 16:45:49 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_getlen(const char *cmp){
	int iter;

	iter = 0;
	while (cmp[iter] != '\0')
		iter++;
	return iter;
}

int cmp_blocks(const char *str, const char *cmp, int block){
	int iter;

	iter = 0;
	while (str[iter] == cmp[iter] && str[iter] != '\0' && cmp[iter] != '\0'){
		if (str[iter] != cmp[iter])
			return (0);
		iter++;
	}
	return iter == block ? 1 : 0;
}


char *ft_strnstr(const char *arg, const char *cmp, int len){
	int iter;
	int block;

	iter = 0;
	block = ft_getlen(cmp);
	while (iter < len){
		if (cmp_blocks(arg, cmp, block))
			break ;
		iter++;
		arg += 1;
	}
	return (arg);
}
