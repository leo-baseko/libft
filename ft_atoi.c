/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drieske <drieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:14:32 by drieske          #+#    #+#             */
/*   Updated: 2022/11/17 11:01:10 by drieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atoi
 * 
 * const char *str : the String
 * 
 * Takes a String in parameter and returns only the numerical value
 * as an Integer
*/

int	ft_atoi(const char *str)
{
	int			i;
	int			n;
	long int	res;
	long int	temp;

	i = 0;
	res = 0;
	temp = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		n *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i++] - '0';
		if (res < temp && n == -1)
			return (0);
		if (res < temp && n == 1)
			return (-1);
		temp = res;
	}
	return (n * (int)res);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	printf("0 ft %d\n",ft_atoi("0"));
// 	printf("0    %d\n",atoi("0"));
// 	printf("+ ft %d\n",ft_atoi("+300"));
// 	printf("+    %d\n",atoi("+300"));
// 	printf("- ft %d\n",ft_atoi("-300"));
// 	printf("-    %d\n",atoi("-300"));
// 	printf("-+ ft %d\n",ft_atoi("-+2147483"));
// 	printf("-+    %d\n",atoi("-+2147483"));
// 	printf("-- ft %d\n",ft_atoi("--300"));
// 	printf("--    %d\n",atoi("--300"));
// 	printf("INT MAX ft %d\n",ft_atoi("2147483647"));
// 	printf("INT MAX    %d\n",atoi("2147483647"));
// 	printf("INT MIN ft %d\n",ft_atoi("-2147483648"));
// 	printf("INT MIN    %d\n",atoi("-2147483648"));
// 	printf("INT OVER ft %d\n",ft_atoi("30000000000"));
// 	printf("INT OVER    %d\n",atoi("30000000000"));
// 	printf("-INT OVER ft %d\n",ft_atoi("-30000000000"));
// 	printf("-INT OVER    %d\n",atoi("-30000000000"));
// 	printf("+LONG ft %d\n",ft_atoi("9223372036854775807"));
// 	printf("+LONG    %d\n",atoi("9223372036854775807"));
// 	printf("-LONG ft %d\n",ft_atoi("-9223372036854775808"));
// 	printf("-LONG    %d\n",atoi("-9223372036854775808"));
// 	printf("LONG OVER ft %d\n",ft_atoi("44444119223372036854775807"));
// 	printf("LONG OVER    %d\n",atoi("44444119223372036854775807"));
// 	printf("-LONG OVER ft %d\n",ft_atoi("-1000000000000000000000"));
// 	printf("-LONG OVER    %d\n",atoi("-1000000000000000000000"));
// 	printf("UNSIGNED LONG MAX ft %d\n",ft_atoi("18446744073709551615"));
// 	printf("UNSIGNED LONG MAX    %d\n",atoi("18446744073709551615"));
// 	printf("-UNSIGNED LONG MAX ft %d\n",ft_atoi("-18446744073709551615"));
// 	printf("-UNSIGNED LONG MAX    %d\n",atoi("-18446744073709551615"));
// 	printf("UNSIGNED LONG OVER ft %d\n",ft_atoi("10000000000000000"));
// 	printf("UNSIGNED LONG OVER    %d\n",atoi("10000000000000000"));
// 	printf("-UNSIGNED LONG OVER ft %d\n",ft_atoi("-30000000000000000"));
// 	printf("-UNSIGNED LONG OVER    %d\n",atoi("-30000000000000000"));
// 	printf("ulongover1 ft %d\n",ft_atoi("18446744073709551616"));
// 	printf("ulongover1    %d\n",atoi("18446744073709551616"));
// 	printf("ulongover2 ft %d\n",ft_atoi("18446744073709551617"));
// 	printf("ulongover2    %d\n",atoi("18446744073709551617"));
// 	printf("ulongover3 ft %d\n",ft_atoi("18446744073709551618"));
// 	printf("ulongover3    %d\n",atoi("18446744073709551618"));
// 	printf("ulongover4 ft %d\n",ft_atoi("18446744073709551619"));
// 	printf("ulongover4    %d\n",atoi("18446744073709551619"));
// }
