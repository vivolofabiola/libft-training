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
	{
		return (NULL);
	}
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i] == '\0')
		{
			break ;
		}
		word_start = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		result[word_index] = ft_substr(s, word_start, i - word_start);
		if (result[word_index] == NULL)
		{
			while (word_index > 0)
			{
				word_index--;
				free(result[word_index]);
			}
			free(result);
			return (NULL);
		}
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}
