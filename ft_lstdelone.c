/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:22:15 by username         #+#    #+#              */
/*   Updated: 2026/10/29 09:57:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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
