/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:09:33 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/14 13:59:12 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstsize
 * 
 * t_list *lst : size of the list
 * 
 * Returns the number of elements in the list
*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*test;

	test = NULL;
	test->next = NULL;
	test->content = NULL;
	printf("%d\n", ft_lstsize(test));
	return (0);
}*/
