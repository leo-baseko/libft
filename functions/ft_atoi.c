/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:14:32 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 15:05:15 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_res_is_negative(char *f, int a)
{
	if (f[0] == '-')
		return ((-a));
	return (a);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res = ft_res_is_negative((char *)str, res);
	return (res);
}
/*
int	main()
{
	printf("ft_atoi : %d\n", ft_atoi("455ut"));
	printf("atoi : %d\n", atoi("455ut"));
	return (0);
}*/
