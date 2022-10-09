/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:45:54 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/04 17:20:05 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	val;

	if (!(dst) || !(src))
		return (0);
	i = 0;
	while (src[i])
		i++;
	val = i;
	if (!(size))
		return (i);
	i = 0;
	while (src[i] && i < (size - 1))
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	val += i;
	return (val);
}

#include <string.h>
int main()
{
	char test[] = "yo les amis gros gros test";
	char test2[] = "yo les copaings";
	char test3[] = "yo les amis gros gors test";
	char test4[] = "yo les copaings";

	printf("length strlcpy : %ld\n", strlcpy(test, test2, 10));
	printf("length ft_strlcpy : %ld\n", ft_strlcpy(test3, test4, 10));
	printf("test : %s\ntest2 : %s\n", test, test2);
	printf("test3 : %s\ntest4 : %s\n", test3, test4);

	return (0);
}
