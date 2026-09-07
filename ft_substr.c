/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:49:29 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/04 17:36:03 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	copy_len;
	char	*new_str;
	char	*substr;

	if (start >= ft_strlen(s))
	{
		new_str = malloc(1);
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	if (len < ft_strlen(s) - start)
		copy_len = len;
	else
	{
		copy_len = ft_strlen(s) - start;
	}
	substr = malloc(copy_len + 1);
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, s + start, copy_len);
	substr[copy_len] = '\0';
	return (substr);
}
