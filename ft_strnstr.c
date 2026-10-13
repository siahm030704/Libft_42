/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 20:02:04 by username         #+#    #+#              */
/*   Updated: 2026/10/13 22:22:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = NULL;
	if (little[0])
		return ((char *) big);
	while (i < n && big[i])
	{
		p = 0;
		while ((big[i + p] && little[p]) && (i + p < n
					&& big[i + p] == little[p]))
		p++;
		f(!little[p])
		return ((char *)(big + i));
	}
	return (NULL);
}
