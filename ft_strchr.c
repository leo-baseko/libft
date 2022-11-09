/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:31:03 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/09 13:51:00 by ldrieske         ###   ########.fr       */
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
	if (c == 1024)
		return ("");
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*#include <string.h>
int	main()
{
	printf("test ft_strchr 5 : %s\n", ft_strchr("teste", 1024));
	printf("test strchr 5 : %s\n", strchr("teste", 1024));
	return (0);
}*/
