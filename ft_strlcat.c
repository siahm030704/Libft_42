/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:49:05 by username          #+#    #+#             */
/*   Updated: 2026/10/27 12:47:49 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	src_len;

	src_len = 0;
	y = 0;
	while (y < size && dst[y])
		y++;
	while (src[src_len])
		src_len++;
	if (y == size)
		return (size + src_len);
	i = 0;
	while (src[i] && y + i < size - 1)
	{
		dst[y + i] = src[i];
		i++;
	}
	dst[y + i] = '\0';
	return (src_len + y);
}
