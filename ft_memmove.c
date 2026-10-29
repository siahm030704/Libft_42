/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:48:24 by username         #+#    #+#              */
/*   Updated: 2026/10/29 06:37:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (len == 0 || dst == src)
		return (dst);
	if ((char *) dst > (char *) src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char *) dst)[i] = ((char *) src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Aello, world!";
// 	size_t	n = 3;

// 	ft_memmove(src + 7, src, n);
// 	printf("%s\n", src);
// 	return (0);
// }
