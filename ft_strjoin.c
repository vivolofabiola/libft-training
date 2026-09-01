/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:50:12 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/01 17:50:13 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	ft_memcpy(new_str, s1, ft_strlen(s1));
	ft_memcpy(new_str + ft_strlen(s1), s2, ft_strlen(s2));

	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';

	return (new_str);
}