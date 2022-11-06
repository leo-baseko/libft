/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:14:32 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 15:05:15 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_intsize(int n)
{
	int	size;
	int	isize;

	isize = 0;
	size = n;
	while (size != 0)
	{
		size = size/10;
		isize++;
	}
	return (isize);
}

static char	*ft_ispos(int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char *) * ft_intsize(n) + 1);
	return (res);
}

static char	*ft_isneg(int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char *) * ft_intsize(n) + 2);
	if (!res)
		return (NULL);
	res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;

	if (!n)
		return (NULL);
	if (n < 0)
		res = ft_isneg(n);
	else
		res = ft_ispos(n);
	return (res);
}

int main(void)
{
	printf("crash test\n");
	printf("intsize : %d\n", ft_intsize(115));
	printf("ft_itoa(115) : %s\n", ft_itoa(115));
	printf("ft_itoa(-115) : %s\n", ft_itoa(-115));
	return (0);
}
