/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:31:00 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/04 17:31:19 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 1)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_convert_itoa(long n, char *new_s, size_t len)
{
	new_s = malloc(len + 1);
	if (new_s == NULL)
	{
		return (NULL);
	}
	if (n < 0)
	{
		new_s[0] = '-';
		n = -n;
	}
	len--;
	while (len)
	{
		new_s[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (new_s[0] != '-')
	{
		new_s[0] = (n % 10) + '0';
	}
	return (new_s);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*s;

	num = n;
	len = ft_itoa_len(num);
	s = 0;
	s = ft_convert_itoa(num, s, len);
	if (!s)
	{
		return (NULL);
	}
	return (s);
}
