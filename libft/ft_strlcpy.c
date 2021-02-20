#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dst == NULL || src == NULL)
		return (0);
	while (dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
