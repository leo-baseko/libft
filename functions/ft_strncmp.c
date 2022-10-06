/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:10:28 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/06 23:21:08 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
#include <string.h>
int	main()
{
	printf("%d\n", ft_strncmp("azc", "acd", 5));
	printf("%d\n", strncmp("azc", "acd", 5));
	return (0);
}*/
