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

size_t	ft_count_trim(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;

	i = 0;
	count = 0;
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
	return (count);
}

char	ft_isnotset(char a, char *b)
{
	size_t	i;

	i = 0;
	if (!a)
		return (0);
	while (b[i])
	{
		if (b[i] == a)
			return (0);
		i++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	size;

	count = ft_count_trim(s1, set);
	i = 0;
	j = 0;
	size = (ft_strlen(s1) - count) + 1;
	res = malloc(sizeof(char) * ((ft_strlen(s1) - count) + 1));
	if (!res)
		return (NULL);
	while (i <= size)
	{
		if (ft_isnotset(s1[i], (char *)set) != 0)
		{
			res[j] = ft_isnotset(s1[i], (char *)set);
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}

/*int main(void)
{
    printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "o?"));
    return (0);
}*/
