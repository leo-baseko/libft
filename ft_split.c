/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:54 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/08 14:58:21 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * words_counter
 * 
 * const char *s : the String we want splitted
 * char sep : the separator we are using
 * 
 * Returns the number of words that we're going to display
 * Returns 0 if s[0] is NULL
*/

static int	words_count(const char *s, char c)
{
	int	i;
	int	words;

	i = 1;
	words = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || s[0] != c))
			words++;
		i++;
	}
	return (words);
}

/*
 * word_len
 *
 * const char *s : the String we want to split
 * char c : the separator
 * int start : the starting position
 * 
 * Returns the length of the a word in s String at start position
*/

static int	word_len(const char *s, char c, int start)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	return (i - start);
}

/*
 * free_return
 * 
 * char **tab : the whole table
 * 
 * Frees the memory inside table
 * Then it frees the whole table
*/

static void	free_return(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

/*
 * tosplit 
 * 
 * const char *s : the String we want to split 
 * char c : the separator
 * char **tab : the final product
 * 
 * Returns the table malloced properly and with the words in it
*/

char	**tosplit(const char *s, char c, char **tab)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	res = tab;
	i = 0;
	k = 0;
	while (s[i])
	{
		j = -1;
		if (s[i] != c)
		{
			res[k] = malloc(sizeof(char) * (word_len(s, c, i)) + 1);
			if (!res[k])
				free_return(res);
			while (++j < word_len(s, c, i))
				res[k][j] = s[i + j];
			res[k++][j] = '\0';
			i += j - 1;
		}
		i++;
	}
	res[k] = 0;
	return (res);
}

/*
* ft_split
*
* char const *s : the String we want to split
* char c : the separator
*
* Allocates the memory of the characters table from the s characters chain
*/

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!res)
		return (0);
	res = tosplit(s, c, res);
	return (res);
}

/*int main(void)
{
	char **test = ft_split("Je-suis---sympa-salut-+-", '-');
	int	i = 0;

	while (test[i])
	{
		printf("<%d> %s\n", i, test[i]);
		i++;
	}
	return (0);
}*/
