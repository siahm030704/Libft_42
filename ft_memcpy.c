/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:48:05 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:57:47 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	if (dest == src || count == 0)
		return (dest);
	i = 0;
	p = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (i < count)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}
