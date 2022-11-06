/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:32:42 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/04 09:42:08 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/*
* ft_bzero
*
* Takes a String value and put n times '\0' in it
*/

void	ft_bzero(void *a, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = a;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	a = str;
}
