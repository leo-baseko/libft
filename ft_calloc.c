/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:42:05 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/09 18:54:50 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	m = malloc(size * count);
	if (!m)
		return (NULL);
	ft_bzero(m, size * count);
	return (m);
}
/*
int	main()
{
	printf("%s\n", ft_calloc(5, 5));
	return (0);
}*/
