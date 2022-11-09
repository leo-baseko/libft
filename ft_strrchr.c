/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:29:25 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/09 13:51:52 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strrchr
 *
 * Returns a pointer of the last occurence of the character c in
 * the String s
 * Returns NULL if the character is not found
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			ptr = ((char *)s);
		s++;
	}
	if (*s == c)
		ptr = (char *)s;
	return (ptr);
}

/*#include <string.h>
int	main()
{
	char test[] = "bonjour les amis comment va";
	char test2[] = "bonjour les amis comment va";

	printf("ft_strrchr : %s\n", ft_strrchr(test, 'm'));
	printf("strrchr : %s\n", strrchr(test2, 'm'));
	return (0);
}*/
