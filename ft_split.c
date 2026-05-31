/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 16:13:05 by pezio             #+#    #+#             */
/*   Updated: 2026/05/31 19:18:15 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_count_word_seperator(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	int		bool_seperator;

	i = 0;
	counter = 0;
	bool_seperator = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && bool_seperator == 0)
		{
			bool_seperator = 1;
			counter++;
		} else if (s[i] == c)
			bool_seperator = 0;
		i++;
	}
	return (counter);
}

static	void ft_makesplit(char const *s, char c, size_t i, char **matriz)
{
	size_t	init;
	char	*string;
	size_t	string_len;

	while (s[i] != '\0')
	{
		init = i;
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] == c)
				i++;
			string_len = i - init + 1;
			string = malloc(sizeof(char) * string_len);
			ft_strlcpy(string, &s[init], string_len);
			*(char **)matriz++ = string;
			i++;
		}
		if (s[i] != '\0' && s[i] == c)
			while (s[i] != '\0' && s[i] == c)
				i++;
	}
	matriz = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	number_word;
	char	**matriz;

	if (s == NULL)
		return (NULL);
	number_word = ft_count_word_seperator(s, c);
	matriz = ft_calloc(number_word + 1, sizeof(char *));
	if (matriz == NULL)
		return (NULL);
	ft_makesplit(s, c, 0, matriz);
	return (matriz);
}
