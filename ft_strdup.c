/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:48:12 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 15:19:45 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen((char *)s1);
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (0);
	while (s1[j])
	{
		a[j] = s1[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
/*
#include <string.h>
int	main(void)
{
	char *slt = "salut";
	char *test = ft_strdup(slt);
	printf("char initial : %s\n\n", test);
	printf("retour fonction ft_strdup : %s\n", ft_strdup(slt));
	printf("case memoire ft_strdup : %p\n", ft_strdup(slt));
	printf("retour fonction strdup : %s\n", strdup(slt));
	printf("case memoire strdup : %p\n", strdup(slt));
	return (0);
}*/
