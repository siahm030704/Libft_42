/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:04:13 by username         #+#    #+#              */
/*   Updated: 2026/10/29 07:07:24 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_node1 = ft_lstnew("Node 1");
// 	t_list	*new_node2 = ft_lstnew("Node 2");

// 	ft_lstadd_front(&head, new_node1);
// 	ft_lstadd_front(&head, new_node2);
// 	// Print the list to verify the order
// 	t_list	*current = head;

// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *) current->content);
// 		current = current->next;
// 	}
// 	// Free the allocated memory
// 	free(new_node1);
// 	free(new_node2);
// 	return (0);
// }
