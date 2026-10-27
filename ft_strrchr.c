/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:51:48 by username          #+#    #+#             */
/*   Updated: 2026/10/27 12:49:48 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*find;

	if (!str)
		return (NULL);
	i = 0;
	find = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			find = (char *) & str[i];
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) & str[i]);
	return (find);
}
