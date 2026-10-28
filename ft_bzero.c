/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:43:42 by username         #+#    #+#              */
/*   Updated: 2026/10/27 23:57:51 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int	main(void)
{
char	*s = malloc(10 *sizeof(char));

s[0] = 'S';
s[1] = 'i';
s[2] = 'h';
s[3] = 'a';
s[4] = 'm';
s[5] = 'a';
s[6] = 'h';
s[7] = 'm';
s[8] = 'a';
s[9] = '\0';
printf("Before ft_bzero: %s\n", s);
ft_bzero(s, 1);
printf("After ft_bzero: %s\n", s);
free(s);
return (0);
}*/
