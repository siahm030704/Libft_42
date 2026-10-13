/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 19:49:05 by username         #+#    #+#              */
/*   Updated: 2026/10/13 19:59:36 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

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
	dst[i + y] = '\0';
	return (src_len + y);
}
