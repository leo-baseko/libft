/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:29:25 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/06 23:08:35 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == c)
			ptr = ((char *)s);
		s++;
	}
	if (*s == c)
		ptr = (char *)s;
	return (ptr);
}
/*
#include <string.h>
int	main()
{
	char test[] = "bonjour les amis comment va";
	char test2[] = "bonjour les amis comment va";

	printf("ft_strrchr : %s\n", ft_strrchr(test, 'm'));
	printf("strrchr : %s\n", strrchr(test2, 'm'));
	return (0);
}*/
