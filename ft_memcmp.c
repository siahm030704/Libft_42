/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:47:35 by username         #+#    #+#              */
/*   Updated: 2026/10/28 07:04:46 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *L, const void *R, size_t count)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *) L;
	s2 = (const unsigned char *) R;
	while (i < count)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
const char	*str1 = "Aello, world!";
const char	*str2 = "aello, world!";
size_t		n = 13;
int			result = ft_memcmp(str1, str2, n);

printf("%d\n", result);
return (0);
}*/
