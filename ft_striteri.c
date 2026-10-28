/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:37:57 by username          #+#    #+#             */
/*   Updated: 2026/10/28 14:22:32 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	*upper(unsigned int i, char *s)
{
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
int main(void)
{
char str[] = "Hello, World!";
ft_striteri(str, upper);
printf("%s\n", str);						
return (0);
}*/
