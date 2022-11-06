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

/*
 * count how many set characters there is in the s1 debut
*/

static size_t	ft_cbegin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	test;
	size_t	res;

	i = 0;
	res = 0;
	while (s1[i])
	{
		j = 0;
		test = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
				test++;
			j++;
		}
		if (test > 0)
			res++;
		else if (test == 0)
			return (res);
		i++;
	}
	return (res);
}

/*
 * count how many set characters there is in the s1 last part
*/

static size_t	ft_clast(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	test;
	size_t	res;

	i = ft_strlen(s1) - 1;
	res = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		test = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
				test++;
			j++;
		}
		if (test > 0)
			res++;
		else if (test == 0)
			return (res);
		i--;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	begin;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	begin = ft_cbegin(s1, set);
	last = ft_clast(s1, set);
	i = begin + last;
	if (ft_strlen(s1) < i)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) - i) + 1);
	if (!res)
		return (NULL);
	i = begin;
	while (s1[i] && i < ft_strlen(s1) - last)
		res[j++] = (char)s1[i++];
	res[j] = '\0';
	return (res);
}

/*int main(void)
{
    printf("strtrim : %s\n", 
	ft_strtrim("abcdba", "acb"));
	return (0);
}*/
