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

/*
 * ft_strlcpy
 *
 * Copies and concatenates Strings with the same input parameters
 * It does less errors than strncpy and strncat
 * Returns the total length of the String it tried to create (length of src)
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		n;

	d = dst;
	s = src;
	n = size - 1;
	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (i < n && *s)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
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
