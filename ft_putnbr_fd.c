/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:36:42 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/08 14:13:15 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	show_nbr(char a, int fd)
{
	write(fd, &a, 1);
}

/*
 * ft_putnbr_fd
 * 
 * int n : the number
 * int fd : the file
 * 
 * Writes the Integer number in the fd file
*/

void	ft_putnbr_fd(int n, int fd)
{
	int	nbd;
	int	nbm;

	nbd = n / 10;
	nbm = n % 10;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		show_nbr('-', fd);
		n = n * (-1);
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(nbd, fd);
		show_nbr(nbm + '0', fd);
	}
	else
		show_nbr(n + '0', fd);
}
