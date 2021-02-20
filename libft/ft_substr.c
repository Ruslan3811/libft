#include "libft.h"

static char		*cond(unsigned int start, size_t len, size_t b, char const *s)
{
	int			i;
	char		*str;

	i = 0;
	if (b < len)
		str = (char*)malloc((b + 1) * sizeof(char));
	else
		str = (char*)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		*str = s[start];
		s++;
		str++;
		i++;
	}
	*str = '\0';
	while (i--)
		str--;
	return (str);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	int			i;
	size_t		b;

	i = 0;
	if (!s)
		return (NULL);
	b = ft_strlen(s);
	if (start < b)
	{
		return (cond(start, len, b, s));
	}
	str = (char*)malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}
