#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ps;

	ps = s;
	while (n)
	{
		if (*ps == (char)c)
			return ((void *)ps);
		ps++;
		n--;
	}
	return (NULL);
}
