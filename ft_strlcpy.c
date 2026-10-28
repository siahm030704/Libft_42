/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:51:13 by username          #+#    #+#             */
/*   Updated: 2026/10/28 16:56:26 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char		dest[20] = "";
	const char	*src = "Hello, world!";
	size_t		size = 0;
	size_t		result;

	result = ft_strlcpy(dest, src, size);
	printf("Result: %zu\n", result);
	printf("Destination: %s\n", dest);
	return (0);
}*/