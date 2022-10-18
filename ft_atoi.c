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

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	n;

	i = 0;
	res = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res *= n;
	return (res);
}

/*static int	ft_isspace(unsigned char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void ft_clearbuff(char *s, int len)
{
	int i;
	i = 0;
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("0 ft %d\n",ft_atoi("0"));
	printf("0    %d\n",atoi("0"));
	printf("+ ft %d\n",ft_atoi("+300"));
	printf("+    %d\n",atoi("+300"));
	printf("- ft %d\n",ft_atoi("-300"));
	printf("-    %d\n",atoi("-300"));
	printf("-+ ft %d\n",ft_atoi("-+2147483"));
	printf("-+    %d\n",atoi("-+2147483"));
	printf("-- ft %d\n",ft_atoi("--300"));
	printf("--    %d\n",atoi("--300"));
	printf("INT MAX ft %d\n",ft_atoi("2147483647"));
	printf("INT MAX    %d\n",atoi("2147483647"));
	printf("INT MIN ft %d\n",ft_atoi("-2147483648"));
	printf("INT MIN    %d\n",atoi("-2147483648"));
	printf("INT OVER ft %d\n",ft_atoi("30000000000"));
	printf("INT OVER    %d\n",atoi("30000000000"));
	printf("-INT OVER ft %d\n",ft_atoi("-30000000000"));
	printf("-INT OVER    %d\n",atoi("-30000000000"));
	printf("+LONG ft %ld\n",ft_atoi("9223372036854775807"));
	printf("+LONG    %ld\n",atoi("9223372036854775807"));
	printf("-LONG ft %ld\n",ft_atoi("-9223372036854775808"));
	printf("-LONG    %ld\n",atoi("-9223372036854775808"));
	printf("LONG OVER ft %ld\n",ft_atoi("44444119223372036854775807"));
	printf("LONG OVER    %ld\n",atoi("44444119223372036854775807"));
	printf("-LONG OVER ft %ld\n",ft_atoi("-1000000000000000000000"));
	printf("-LONG OVER    %ld\n",atoi("-1000000000000000000000"));
	printf("UNSIGNED LONG MAX ft %ld\n",ft_atoi("18446744073709551615"));
	printf("UNSIGNED LONG MAX    %ld\n",atoi("18446744073709551615"));
	printf("-UNSIGNED LONG MAX ft %ld\n",ft_atoi("-18446744073709551615"));
	printf("-UNSIGNED LONG MAX    %ld\n",atoi("-18446744073709551615"));
	printf("UNSIGNED LONG OVER ft %d\n",ft_atoi("10000000000000000"));
	printf("UNSIGNED LONG OVER    %d\n",atoi("10000000000000000"));
	printf("-UNSIGNED LONG OVER ft %d\n",ft_atoi("-30000000000000000"));
	printf("-UNSIGNED LONG OVER    %d\n",atoi("-30000000000000000"));
	printf("ulongover1 ft %ld\n",ft_atoi("18446744073709551616"));
	printf("ulongover1    %ld\n",atoi("18446744073709551616"));
	printf("ulongover2 ft %ld\n",ft_atoi("18446744073709551617"));
	printf("ulongover2    %ld\n",atoi("18446744073709551617"));
	printf("ulongover3 ft %ld\n",ft_atoi("18446744073709551618"));
	printf("ulongover3    %ld\n",atoi("18446744073709551618"));
	printf("ulongover4 ft %ld\n",ft_atoi("18446744073709551619"));
	printf("ulongover4    %ld\n",atoi("18446744073709551619"));
}*/
