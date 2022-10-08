/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:14:32 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/08 15:40:18 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_res_is_negative(char *f, int *a)
{
	int	j;
	int	k;
	int	l;

	j = 0;
	k = 0;
	l = *a;
	while (f[j] < '0' || f[j] > '9')
	{
		if (f[j] == '-')
			k++;
		j++;
	}
	if (k % 2 != 0)
		*a = l * (-1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				res = res * 10 + str[i] - '0';
				i++;
			}
			ft_res_is_negative((char *)str, &res);
			return (res);
		}
		i++;
	}
	return (0);
}

int	main()
{
	printf("ft_atoi : %d\n", ft_atoi("-455ut"));
	printf("atoi : %d\n", atoi("-455ut"));
	return (0);
}
