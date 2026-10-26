/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:51:48 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:42:06 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*find;

	if (!str)
		return (NULL);
	i = 0;
	find = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			find = (char *) & str[i];
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) & str[i]);
	return (find);
}
