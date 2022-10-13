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
	const char	*p;

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
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("memchr : %s\n", (char *)memchr(tab, -1, 7));
	printf("ft_memchr : %s\n", (char *)ft_memchr(tab, -1, 7));
	return (0);
}
*/