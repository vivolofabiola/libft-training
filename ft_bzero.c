/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:52:43 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/01 17:52:46 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main(){

//     char buf[6] = "Hello";

// 	printf("Before: %s\n", buf);
// 	ft_bzero(buf, 3);
// 	printf("After: ");
// 	for (int i = 0; i < 6; i++)
// 		printf("[%d]", buf[i]);
// 	printf("\n");

//     return (0);
// }