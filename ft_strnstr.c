/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:46:47 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 14:30:27 by ldrieske         ###   ########.fr       */
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
			while (needle[j] != '\0' && haystack[k] == needle[j] && k < len)
			{
				j++;
				k++;
			}
			if (j == ft_strlen((char *)needle))
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*int	main()
{
	printf("strnstr : %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("ft_strnstr : %s\n",
	ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
