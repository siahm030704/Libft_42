/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:43:42 by username         #+#    #+#              */
/*   Updated: 2026/10/22 20:23:50 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		p[i] = 0;
		i++;
	}
}
