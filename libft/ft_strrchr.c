#include "libft.h"

static char		*ft_right_left(char *str, char c)
{
	int			i;
	char		*str1;

	i = 0;
	str1 = str;
	while (*str1 != '\0')
	{
		str1++;
		i++;
	}
	while (i != 0)
	{
		i--;
		str1--;
		if (*str1 == c)
			return (str1);
	}
	return (NULL);
}

char			*ft_strrchr(const char *str, int c)
{
	char		*s;
	char		b;
	char		*d;

	s = (char*)str;
	b = (char)c;
	if (b == '\0')
	{
		while (*s != '\0')
			s++;
		return (s);
	}
	if (*s != '\0')
	{
		d = ft_right_left(s, c);
		return (d);
	}
	return (NULL);
}
