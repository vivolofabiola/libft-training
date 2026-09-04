/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:33:21 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/04 17:33:22 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			words++;
		}
		i++;
	}
	return (words);
}

static void	ft_free_split(char **result, size_t word_index)
{
	while (word_index > 0)
	{
		word_index--;
		free(result[word_index]);
	}
	free(result);
}

static size_t	ft_word_end(const char *s, size_t i, char c)
{
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;
	size_t	i;
	size_t	word_index;
	size_t	word_start;

	words = ft_count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		word_start = i;
		i = ft_word_end(s, i, c);
		result[word_index] = ft_substr(s, word_start, i - word_start);
		if (result[word_index] == NULL)
		{
			ft_free_split(result, word_index);
			return (NULL);
		}
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}
