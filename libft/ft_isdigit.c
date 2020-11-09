/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:04:02 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 18:40:19 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int arg)
{
	return ((int)arg >= 48 && (int)arg <= 57 ? 1 : 0);
}