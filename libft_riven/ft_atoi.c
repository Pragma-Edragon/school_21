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
    int             key;
    unsigned long long int res;

    res = 0;
    while (*str == 32 || (*str >= 6 && *str <= 13))
        str++;
    key = *str == '-' ? 1 : 0;
    if (key || *str == '+')
        str++;
    while (*str >= 48 && *str <= 57){
        if (res < 9223372036854775807)
            res = res * 10 + *str - '0';
        else if (res > 9223372036854775807 && key == 1)
            return (0);
        else
            return (-1);
        str++;
    }
    return key == 1 ? res * -1 : res;
}
