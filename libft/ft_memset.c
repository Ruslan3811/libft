#include "libft.h"

void			*ft_memset(void *b, int c, size_t len)
{
	char		*d;
	size_t		i;

	d = b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		*d = c;
		d++;
		i++;
	}
	return (b);
}
