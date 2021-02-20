#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int			len;
	int			i;
	char		*p;

	i = 0;
	p = (char*)s1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, p[i]) != 0 && p[i] != '\0')
		i++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, p[len]) != 0 && len != 0)
		len--;
	p = ft_substr(p, i, len - i + 1);
	return (p);
}
