/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:07:54 by username          #+#    #+#             */
/*   Updated: 2026/10/29 14:04:20 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
// 	unsigned int	size = ft_lstsize(head);

// 	printf("Size of the linked list: %u\n", size);
// 	free(new_node1);
// 	free(new_node2);
// 	free(new_node3);
// 	return (0);
// }
