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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s || ((unsigned int)ft_strlen((char *)s) < start))
		return (NULL);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (len != 0)
	{
		res[i] = (char)s[start++];
		len--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 200, 10));
	return (0);
}*/
