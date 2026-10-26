/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 15:20:43 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:40:46 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(dup, s, len);
	return (dup);
}
