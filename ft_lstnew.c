/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <ldrieske@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:30:23 by ldrieske          #+#    #+#             */
/*   Updated: 2022/11/10 15:21:39 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstnew 
 * 
 * void *content : the content to create the node with
 * 
 * Allocates and returns a new node
 * The member variable content is initialized with the value
 * of the parameter content 
 * The variable next is initialized to NULL
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return (0);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}

/*int	main(void)
{
	char	content[5] = "salut";

	printf("jsp voyons si ca compile deja\n\n");
	printf("%s\n", ft_lstnew(content)->content);
	//printf("%s\n", ft_lstnew(content)->next);
	return (0);
}*/
