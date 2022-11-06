/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:41:19 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/04 09:11:07 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/*
* ft_memset
*
* Writes len bytes of c value in a b pointer
* Returns the value of b
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = (int)c;
		i++;
	}
	return (b = str);
}
