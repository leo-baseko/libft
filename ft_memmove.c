/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:39:33 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 17:49:55 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_memmove 
 * 
 * Copies n bytes from String src to String dst
 * The 2 Strings may overlap (only difference with memcpy)
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (src < dst)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
int main()
{
	//char src[] = {67, 68, 67, 68, 69, 0, 45};
	char dest[] = {67, 67, 68, 68, 69, 0, 45};

	ft_memmove(dest + 1, dest, 2);
	printf("\nft_memmove\ntest2 = %s.\ntest3 = %s.\n", dest, dest);
	memmove(dest + 1, dest, 2);
	printf("\nmemmove : \n%s.\n%s.\n", dest, dest);

	return 0;
}*/