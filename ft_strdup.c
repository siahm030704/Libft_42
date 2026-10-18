/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 15:20:43 by username         #+#    #+#              */
/*   Updated: 2026/10/15 15:36:39 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	size_t	len = ft_strlen(s) + 1;

	// +1 for the null terminator
	char	*dup = malloc(len);

	if (dup == NULL)
	{
		return (NULL);
		// Handle memory allocation failure
	}
	ft_strlcpy(dup, s, len);
	return (dup);
}
