/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:08:07 by ldrieske          #+#    #+#             */
/*   Updated: 2022/10/17 20:09:10 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	res = malloc(sizeof(char) * ((ft_strlen(s1) - count) + 1));
	if (!res)
		return (NULL);
	return (NULL);
}

/*int main(void)
{
	return (0);
}*/
