#include "libft.h"

static char		*copy(char *new1, char const *s)
{
	while (*s != '\0')
	{
		*new1 = *s;
		new1++;
		s++;
	}
	return (new1);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int			len;
	char		*new1;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new1 = malloc(sizeof(char) * (len + 1));
	if (!new1)
		return (NULL);
	copy(new1, s1);
	copy(&new1[ft_strlen(s1)], s2);
	new1[len] = '\0';
	return (new1);
}
