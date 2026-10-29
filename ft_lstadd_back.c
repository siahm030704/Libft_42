/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:11:43 by username         #+#    #+#              */
/*   Updated: 2026/10/29 07:15:15 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// int main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_node1 = ft_lstnew("Node 1");
// 	t_list	*new_node2 = ft_lstnew("Node 2");
// 	t_list	*new_node3 = ft_lstnew("Node 3");

// 	ft_lstadd_back(&head, new_node1);
// 	ft_lstadd_back(&head, new_node2);
// 	ft_lstadd_back(&head, new_node3);

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
// 	free(new_node3);

// 	return (0);
// }
