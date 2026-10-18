/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 16:30:56 by username         #+#    #+#              */
/*   Updated: 2026/10/18 16:49:43 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
	{
		return (NULL);
		// Handle null pointers
	}
	size_t	start = 0;
	size_t	end = ft_strlen(s1);

	// Trim from the start
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	// Trim from the end
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	size_t	len = end - start;
	char	*trimmed_str = malloc(len + 1);

	// +1 for null terminator
	if (!trimmed_str)
	{
		return (NULL);
		// Handle memory allocation failure
	}
	ft_strlcpy(trimmed_str, s1 + start, len + 1);
	return (trimmed_str);
}
