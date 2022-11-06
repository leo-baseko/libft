/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:52:26 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 17:52:29 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_toupper
 *
 * Change the value of a to his uppercase equivalent
*/

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		return (a -= 32);
	return (a);
}
