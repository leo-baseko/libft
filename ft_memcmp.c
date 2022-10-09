/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:28:56 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/08 11:45:42 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (*c1 != '\0' && *c2 != '\0' && n > 0)
	{
		if (*c1 != *c2)
			break ;
		c1++;
		c2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*c1 - *c2);
}
/*
#include <string.h>
int	main()
{
	printf("%d\n", memcmp("abz", "aaza", 1));
	printf("%d\n", ft_memcmp("abz", "aaza", 1));
	return (0);
}*/
