/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:31:03 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/06 22:28:49 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_strchr
 *
 * Returns a pointer to the first occurence of the character c in
 * the s String
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
#include <string.h>
int	main()
{
	char test[] = "salut";
	char test2[] = "salut";
	
	printf("ft_strchr : %s\n", ft_strchr(test, 'l'));
	printf("strchr : %s\n", strchr(test2, 'l'));
	return (0);
}*/
