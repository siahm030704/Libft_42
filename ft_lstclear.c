/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:24:49 by username          #+#    #+#             */
/*   Updated: 2026/10/29 16:14:24 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_element;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp_element = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_element;
	}
	*lst = NULL;
}

// static void	del_content(void *content)
// {
// 	free(content);;
// }

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_node1 = ft_lstnew(ft_strdup("Node 1"));
// 	t_list	*new_node2 = ft_lstnew(ft_strdup("Node 2"));
// 	t_list	*new_node3 = ft_lstnew(ft_strdup("Node 3"));

// 	ft_lstadd_back(&head, new_node1);
// 	ft_lstadd_back(&head, new_node2);
// 	ft_lstadd_back(&head, new_node3);
// 	ft_lstclear(&head, del_content);
// 	if (head == NULL)
// 		printf("The list has been cleared.\n");
// 	else
// 		printf("The list is not empty.\n");
// 	return (0);
// }
