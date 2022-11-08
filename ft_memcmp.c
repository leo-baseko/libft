/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:28:56 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/08 16:41:38 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memcmp
 * 
 * Pretty similar to strncmp
 * Gives the n bytes difference between s1 and s2
 * Returns 0 is there's no difference
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (*c1 && *c2 && n > 0)
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

/*int	main(void)
{
	printf("%d\n", memcmp("abz", "aaza", 3));
	printf("%d\n", ft_memcmp("abz", "aaza", 3));
	
    char *s1 = "atoms\0\0\0\0";
    char *s2 = "atoms\0abc";
    size_t size = 8;
	printf("test ft_memcmp : %d\n", ft_memcmp(s1, s2, size));
	printf("test memcmp : %d\n", memcmp(s1, s2, size));

	return (0);
}*/
