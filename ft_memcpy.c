/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:48:05 by username          #+#    #+#             */
/*   Updated: 2026/10/28 11:58:37 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	if (dest == src || count == 0)
		return (dest);
	i = 0;
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < count)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
char		dest[20];
const char	*src = "Hello, world!";
size_t		n = 5;

ft_memcpy(dest, src, n);
printf("%s\n", dest);
return (0);
}*/
