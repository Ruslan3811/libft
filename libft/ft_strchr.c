char		*ft_strchr(const char *s, int c)
{
	char	d;
	char	*str;

	str = (char*)s;
	d = (char)c;
	if (d == '\0')
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	else
	{
		while (*str != '\0')
		{
			if (d == *str)
				return (str);
			str++;
		}
	}
	return (0);
}
