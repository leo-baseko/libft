/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:51 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/04 14:20:39 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = src;
	str2 = dst;
	i = 0;
	while (str1[i] && i < n)
	{
		str1[i] = str2[i];
		i++;
	}

	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char test0[] = "salut";
	char test1[] = "bonjour";

	char test2[] = "salut";
	char test3[] = "bonjour";
	memcpy(test1, test0, 3);
	printf("memcpy\ntest0 = %s\ntest1 = %s\n", test0, test1);
	ft_memcpy(test2, test3, 3);
	printf("\nft_memcpy\ntest2 = %s\ntest3 = %s", test2, test3);
	
	return 0;
}*/
