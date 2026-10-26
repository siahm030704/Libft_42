/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:47:02 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:32:38 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

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
