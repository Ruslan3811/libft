#include "libft.h"

void						*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*mass1;
	const unsigned char		*mass2;

	mass1 = dst;
	mass2 = src;
	if (dst || src)
	{
		while (n)
		{
			*mass1 = *mass2;
			mass1++;
			mass2++;
			n--;
		}
		return (dst);
	}
	return (NULL);
}
