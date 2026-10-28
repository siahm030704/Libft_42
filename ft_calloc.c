/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 00:17:08 by username         #+#    #+#              */
/*   Updated: 2026/10/29 01:15:31 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*n;
	size_t			i;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		n = malloc(1);
		if (!n)
			return (NULL);
		n[0] = '\0';
		return (n);
	}
	n = malloc(nmemb * size);
	if (!n)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
/*
int	main(void)
{
size_t	nmemb = 5;
size_t	size = sizeof(int);

printf("%p ", ft_calloc(nmemb, size));
return (0);
}*/
