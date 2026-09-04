/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:58:22 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/04 17:34:26 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i + 1 < dstsize)
		{
			dst[i] = src[i];
		}
		i++;
	}
	if (dstsize > 0)
	{
		dst[dstsize - 1] = '\0';
	}
	return (i);
}
