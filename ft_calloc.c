/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarsour <ssarsour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:17:08 by username          #+#    #+#             */
/*   Updated: 2026/10/29 16:32:20 by ssarsour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*n;
	size_t			i;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
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

/*int	main(void)
{
	size_t	nmemb = 5;
	int		*p = ft_calloc(nmemb, sizeof(int));
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("%d", p[i]);
		i++;
	}
	free(p);
	return (0);
}*/
