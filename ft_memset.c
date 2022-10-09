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

void	*ft_memset(void *a, int b, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = a;
	i = 0;
	while (i < len)
	{
		str[i] = (int)b;
		i++;
	}
	return (a = str);
}
