/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:51 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 20:59:51 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)src;
	str2 = dst;
	if (dst == 0 || src == dst)
		return (NULL);
	while (i < n)
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char test0[] = "travailffffffffffffffffffffffffff";
	char test1[] = "0235555555555555555555";

	char test2[] = "travailffffffffffffffffffffffffff";
	char test3[] = "0235555555555555555555";
	memcpy(test1, test0, 4);
	printf("memcpy\ntest0 = %s\ntest1 = %s\n", test0, test1);
	ft_memcpy(test2, test3, 4);
	printf("\nft_memcpy\ntest2 = %s\ntest3 = %s", test2, test3);
	
	return 0;
}*/
