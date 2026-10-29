/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:09:03 by username          #+#    #+#             */
/*   Updated: 2026/10/29 14:04:11 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_node1 = ft_lstnew("Node 1");
// 	t_list	*new_node2 = ft_lstnew("Node 2");
// 	t_list	*new_node3 = ft_lstnew("Node 3");

// 	ft_lstadd_front(&head, new_node1);
// 	ft_lstadd_front(&head, new_node2);
// 	ft_lstadd_front(&head, new_node3);
// 	t_list	*last_node = ft_lstlast(head);

// 	if (last_node != NULL)
// 		printf("Last node content: %s\n", (char *) last_node->content);
// 	else
// 		printf("The list is empty.\n");
// 	// Free the allocated memory
// 	free(new_node1);
// 	free(new_node2);
// 	free(new_node3);
// 	return (0);
// }
