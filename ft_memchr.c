/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:23:56 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/08 11:28:18 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	const unsigned char	*p;

	p = s;
	if (n == 0)
		return (NULL);
	while (n != 0)
	{
		if (*p++ == c)
			return ((void *)(p - 1));
		n--;
	}
	return (NULL);
}

/*
#include <string.h>
int	main()
{
	printf("memchr : %s\n", memchr("enorme test salut salut", 's', 15));
	printf("ft_memchr : %s\n", ft_memchr("enorme test salut salut", 's', 15));
	return (0);
}*/
