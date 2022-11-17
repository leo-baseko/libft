/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:32:42 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/17 15:10:24 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
