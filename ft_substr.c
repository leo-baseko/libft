/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:14:40 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/16 17:02:36 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_substr
 * 
 * char const *s : initial String
 * unsigned int start : index of start
 * size_t len : length of the new String
 * 
 * Allocates and returns a substring from the string s beginning 
 * at index start and of maximum size len
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s) - start;
	if (len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s))
		return (res = ft_calloc(sizeof(char), 1));
	while (s[size] && size < len && start < ft_strlen(s))
		size++;
	res = malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	while (size != 0 && s[start])
	{
		res[i] = (char)s[start++];
		size--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	printf("salut\n");
// 	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 5, 10));
// 	printf("%s\n", ft_substr("hola", 2, 30));
// 	printf("%s\n", ft_substr("", 0, 55));
// 	return (0);
// }
