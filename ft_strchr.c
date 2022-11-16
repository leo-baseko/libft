/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:31:03 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/16 16:13:55 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr
 *
 * Returns a pointer to the first occurence of the character c in
 * 	the s String
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return ((char *) 0);
	}
	return ((char *) &s[i]);
}

// int	main()
// {
// 	printf("ft_strchr : %s\n", ft_strchr("teste", 1024));
// 	printf("strchr : %s\n", strchr("teste", 1024));
// 	return (0);
// }
