/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 00:17:08 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:16:42 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*n;
	size_t			i;

	if (nmemb == 0 || size == 0)
	{
		n = malloc(1);
		if (!n)
			return (NULL);
		n[0] = '\0';
		return (n);
	}
	n = malloc(nmemb * size);
	if (!n)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
