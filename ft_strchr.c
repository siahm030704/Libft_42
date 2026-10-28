/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:51:07 by username          #+#    #+#             */
/*   Updated: 2026/10/28 14:09:22 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char) s[i] != (unsigned char) c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *) s + i);
}
/*
int main(void)
{
	const char	*str = "Hello, world!";
	int			c = 'o';
	
		printf("%ld\n",ft_strchr(str, c));
	
	return (0);
}*/