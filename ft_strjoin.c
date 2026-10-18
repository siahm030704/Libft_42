/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 16:17:22 by username         #+#    #+#              */
/*   Updated: 2026/10/18 16:17:22 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 && !s2)
	{
		return (NULL);
		// Handle null pointers
	}
	size_t	len1 = ft_strlen(s1);
	size_t	len2 = ft_strlen(s2);
	char	*result = malloc(len1 + len2 + 1);

	// +1 for the null terminator
	if (!result)
	{
		return (NULL);
		// Handle memory allocation failure
	}
	ft_strlcpy(result, s1, len1 + 1);
	// Copy s1 into result
	ft_strlcat(result, s2, len1 + len2 + 1);
	// Concatenate s2 to result
	return (result);
}
