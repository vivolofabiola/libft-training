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
	size_t	start;
	size_t	i;
	size_t	end;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}


	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}

	
	new_str = malloc((end - start + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	while(start < end) 
	{
		new_str[i++] = s1[start++];
	}
	new_str[i] = '\0';

	return (new_str);
}