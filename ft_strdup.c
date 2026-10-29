/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:20:43 by username          #+#    #+#             */
/*   Updated: 2026/10/28 14:18:07 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(dup, s, len);
	return (dup);
}
/*
int	main(void)
{
	const char	*str;
	char		*dup;

	str = "Hello, world!";
	dup = ft_strdup(str);

	printf("Original: %s\n", str);
	printf("Duplicate: %s\n", dup);
	free(dup);
	return (0);
}*/