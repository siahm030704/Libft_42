/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:51:13 by username         #+#    #+#              */
/*   Updated: 2026/10/12 18:51:13 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

static char	*ll(char *dst, const char *src, size_t i, size_t size)
{
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size > len)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else if (size <= length && size > 0)
	{
		dst = ll(dst, src, i, size);
	}
	return (len);
}
