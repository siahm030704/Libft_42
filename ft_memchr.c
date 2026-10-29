/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:47:02 by username          #+#    #+#             */
/*   Updated: 2026/10/29 14:04:23 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	const unsigned char	*pt;
	size_t				i;

	pt = (const unsigned char *) ptr;
	i = 0;
	while (i < n)
	{
		if (pt[i] == (unsigned char) ch)
			return ((void *) & pt[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
const char	*str = "Aello, world!";
char		ch = 'e';

printf("Original string: %s\n", str);
printf(" %p\n", ft_memchr(str, ch, strlen(str)));
return (0);
}*/
