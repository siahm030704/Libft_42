/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:50:48 by username         #+#    #+#              */
/*   Updated: 2026/10/29 06:38:45 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *) ptr;
	while (i < num)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	size_t	n = 4;

// 	ft_memset(src, '*', n);
// 	printf("%s\n", src);
// 	return (0);
// }
