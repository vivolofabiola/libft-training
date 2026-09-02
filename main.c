/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:49:08 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/02 18:44:55 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Result: %d\n", ft_isalpha('A'));
	printf("Result: %d\n", ft_isdigit('5'));
	printf("Result: %d\n", ft_atoi("--56"));
	return (0);
}