char	*ft_strrchr(const char *str, int c)
{
	int	i;
    char *find;

	i = 0;
    find = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			find =(char *)&str[i];
		i++;
	}
  
	if (c == '\0')
		return ((char *)&str[i]);
	return (find);
}