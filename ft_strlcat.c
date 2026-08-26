/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:02:24 by fvivolo           #+#    #+#             */
/*   Updated: 2026/08/24 18:47:28 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (i + j + 1 < size)
			dst[i + j] = src[j];
		j++;
	}
	if (size > 0)
	{
		dst[i + 1] = '\0';
		i++;
	}
	return (i + j);
}

// int	main(void)
// {
// 	char dest[10] = "o";
// 	char src[10] = "W";

// 	printf("%zu", ft_strlcat(dest, src, 16));

// 	return (0);
// }