#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *d1;
	const unsigned char *d2;

	d1 = (const unsigned char*)s1;
	d2 = (const unsigned char*)s2;
	if (n != 0)
	{
		while (n--)
		{
			if (*d1 != *d2)
				return (*d1 - *d2);
			d1++;
			d2++;
		}
	}
	return (0);
}
