#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		a;

	a = 0;
	a = ft_strlen(s1);
	str = (char*)malloc((a + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1 != '\0')
	{
		*str = *s1;
		str++;
		s1++;
	}
	*str = '\0';
	while (a--)
		str--;
	return (str);
}
