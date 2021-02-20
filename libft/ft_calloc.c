#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *mass;

	mass = (char *)malloc(size * count);
	if (!mass)
		return (NULL);
	ft_memset(mass, '\0', size * count);
	return (mass);
}
