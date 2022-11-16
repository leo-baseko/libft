/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:29:25 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/16 16:42:13 by ldrieske         ###   ########.fr       */
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
	int	i;

	i = ft_strlen(s) + 1;
	while (s[--i] != (unsigned char)c)
	{
		if (i == 0 && s[i] != c)
			return ((char *) 0);
	}
	return ((char *) &s[i]);
}

// int	main()
// {
// 	char test[] = "bonjour le\0s amis";
// 	char test2[] = "bonjour le\0s amis";

// 	printf("strrchr : %s\n", strrchr(test2, '\0'));
// 	printf("ft_strrchr : %s\n", ft_strrchr(test, '\0'));
// 	return (0);
// }
