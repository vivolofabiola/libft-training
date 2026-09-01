/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:58:54 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/01 18:13:52 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start = 0;
	size_t end;
	size_t len = 0;

	ft_strlen(s1);

	ft_strchr(set, s1[start]);

	while (ft_strlen(s1) && ft_strchr(set, strlen(s1)))
	{
		start++;
	}

	end = ft_strlen(s1);

	while (end && ft_strchr(set, strlen(s1)))
	{
		end--;
	}

	if (s1 == set)
	{
		return ('\0');
	}

	char *new_str = malloc((s1[start] + s1[end] + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str[start + end] = '\0';
}