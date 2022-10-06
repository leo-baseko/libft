/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:23:56 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/07 00:06:54 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    if (n != 0) {
        const unsigned char *p = s;

        do {
            if (*p++ == c)
                return ((void *)(p - 1));
        } while (--n != 0);
    }
    return (NULL);
}

#include <string.h>
int	main()
{
	printf("memchr : %s\n", memchr("enorme test je comprends que dalle", 't', 15));
	printf("ft_memchr : %s\n", ft_memchr("enorme test je comprends que dalle", 't', 15));
	return (0);
}
