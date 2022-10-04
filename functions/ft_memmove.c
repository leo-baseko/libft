/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:39:33 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:00 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = src;
	str2 = dst;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}

	return (dst);
}
/*
#include <string.h>
int main()
{
	char test0[] = "salutsalut";
	char test1[] = "bonjour";

	char test2[] = "salutsalut";
	char test3[] = "bonjour";
	memmove(test1, test0, 3);
	printf("memmove\ntest0 = %s\ntest1 = %s\n", test0, test1);
	ft_memmove(test2, test3, 3);
	printf("\nft_memmove\ntest2 = %s\ntest3 = %s", test2, test3);

	return 0;
}*/
