/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:58:10 by username          #+#    #+#             */
/*   Updated: 2026/10/29 14:04:07 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	upper(void *c)
// {
// 	char	*str;
// 	int		i;

// 	str = (char *) c;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] -= 32;
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	str1[] = "Node 1";
// 	char	str2[] = "Node 2";
// 	char	str3[] = "Node 3";
// 	t_list	*head = NULL;
// 	t_list	*new_node1 = ft_lstnew(str1);
// 	t_list	*new_node2 = ft_lstnew(str2);
// 	t_list	*new_node3 = ft_lstnew(str3);

// 	ft_lstadd_back(&head, new_node1);
// 	ft_lstadd_back(&head, new_node2);
// 	ft_lstadd_back(&head, new_node3);
// 	ft_lstiter(head, upper);
// 	printf("New node created with content: %s\n", (char *) new_node2->content);
// }
