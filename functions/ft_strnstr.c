/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:46:47 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/08 15:13:56 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			while (needle && *haystack == *needle)
			{
				needle++;
				haystack++;
			}
			if (i == ft_strlen((char *)needle))
				return ((char *)haystack);
		}
		i++;
		j = 0;
	}
	return (0);
}

#include <string.h>
int	main()
{
	printf("%s\n", strnstr("bonjour","jou", 10));
	printf("%s\n", ft_strnstr("bonjour", "jou", 10));
	return (0);
}
