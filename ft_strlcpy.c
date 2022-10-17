/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:45:54 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 17:51:40 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//opensource.apple.com
//dernier test 13/10/2022 2:55 : 4 premiers ok | dernier ko
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;

	d = dst;
	s = src;
	n = size - 1;
	if (size == 0)
		return (0);
	while (n != 0 && (*d = *s) != 0)
	{
		d++;
		s++;
		n--;
	}
	while (*s++)
	{
		if (size != 0)
			*d = '\0';
	}
	return (ft_strlen((char *)src));
}

/*
#include <string.h>
int main()
{
	char test1[] = "bonjour";
	char test2[] = "slt";
	char test3[] = "bonjour";
	char test4[] = "slt";

	printf("length strlcpy : %ld\n", strlcpy(test1, test2, 3));
	printf("length ft_strlcpy : %ld\n", ft_strlcpy(test3, test4, 3));
	printf("strlcpy test1 : %s\nstrlcpy test2 : %s\n", test1, test2);
	printf("ft_strlcpy test1 : %s\nft_strlcpy test2 : %s\n", test3, test4);

	return (0);
}*/
