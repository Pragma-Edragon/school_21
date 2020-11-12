/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:03 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/07 17:17:03 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			words_amount(char const *s, char c)
{
	size_t		amount;
	size_t		iter;

	iter = 0;
	amount = 0;
	while (s[iter])
	{
		if (s[iter] != (unsigned char)c && s[iter])
			amount++;
		while (s[iter] != (unsigned char)c && s[iter])
			iter++;
		iter++;
	}
	return (amount);
}

size_t			word_len(char const *s, char letter, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start] != '\0' && s[start] != letter)
	{
		len++;
		start++;
	}
	return (len);
}

void			memory_clean_for_words(char **words, size_t amount)
{
	while (--amount)
		free(words[amount]);
	free(words);
}

char			**ft_split(char const *s, char c)
{
	char		**words;
	size_t		amount;
	size_t		iter;
	size_t		start;

	if (!s || !*s)
		return ((void *)0);
	amount = words_amount(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * (words_amount(s, c) + 1))))
		return ((void *)0);
	iter = -1;
	start = 0;
	while (iter < amount - 1)
	{
		while (s[start] == c)
			start++;
		if (!(words[iter++] = ft_substr(s, start, word_len(s, c, start))))
		{
			memory_clean_for_words(words, amount);
			return ((void *)0);
		}
		start += word_len(s, c, start);
	}
	*(words + iter) = (void *)0;
	return (words);
}
