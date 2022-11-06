/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:14:40 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/17 17:37:17 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_substr
 *
 * Does a copy
 * Of what I dunno and I don't care for the moment
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
	while (s[size] && size < len && start < ft_strlen(s))
		size++;
	res = malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	while (size != 0)
	{
		res[i] = (char)s[start++];
		size--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 5, 10));
	return (0);
}*/
