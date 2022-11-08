/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:09:17 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/08 14:59:49 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * nb_char
 * 
 * int n : 
 * 
 * 
*/

static int	nbr_char(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/*
 * ft_itoa 
 * 
 * int n : the Integer we want as a String
 * 
 * Returns a String representing the Integer received as an argument
*/

char	*ft_itoa(int n)
{
	size_t		l;
	char		*nbr;
	long int	c;

	c = n;
	l = nbr_char(c);
	nbr = malloc(sizeof(char) * l + 1);
	if (!nbr)
		return (0);
	nbr[l--] = '\0';
	if (c == 0)
		nbr[0] = 48;
	if (c < 0)
	{
		nbr[0] = '-';
		c *= -1;
	}
	while (c > 0)
	{
		nbr[l--] = c % 10 + 48;
		c /= 10;
	}
	return (nbr);
}

/*int main(void)
{
	printf("crash test\n");
	printf("intsize : %d\n", ft_intsize(115));
	printf("ft_itoa(115) : %s\n", ft_itoa(115));
	printf("ft_itoa(-115) : %s\n", ft_itoa(-115));
	return (0);
}*/
