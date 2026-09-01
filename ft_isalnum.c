/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivolo <fvivolo@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:51:17 by fvivolo           #+#    #+#             */
/*   Updated: 2026/09/01 18:15:41 by fvivolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
				&& c <= 'Z')));
	return (ft_isalpha(c) || ft_isdigit(c));
}
// int main(){

//     int a = '*';

//     printf("%d", ft_isalnum(a));

//     return (0);
// }