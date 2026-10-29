/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:22:15 by username          #+#    #+#             */
/*   Updated: 2026/10/29 14:43:20 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
	*lst = NULL;
}

// static void	del_content(void *content)
// {
// 	(void) content;
// }

// int	main(void)
// {
// 	t_list	*node = ft_lstnew("Node 1");

// 	if (node == NULL)
// 		return (1);
// 	ft_lstdelone(node, del_content);
// 	return (0);
// }
