#include "libft.h"

static char			*ft_swap(char *mass, int count)
{
	char			c;
	int				i;
	int				j;

	i = 0;
	j = count - 2;
	while (j >= count / 2)
	{
		c = mass[i];
		mass[i] = mass[j];
		mass[j] = c;
		i++;
		j--;
	}
	return (mass);
}

static char			*ft_memory(int count, int nbr)
{
	int				i;
	unsigned int	b;
	char			*mass;

	i = 0;
	b = (unsigned int)nbr;
	if (nbr < 0)
		b = (unsigned int)(nbr * -1);
	mass = (char*)malloc(sizeof(char) * count);
	if (!mass)
		return (NULL);
	while (b != 0)
	{
		mass[i] = b % 10 + '0';
		b = b / 10;
		i++;
	}
	if (nbr < 0)
	{
		mass[i] = '-';
		i++;
	}
	mass[i] = '\0';
	return (ft_swap(mass, count));
}

static int			ft_count(int n)
{
	int				i;
	int				n2;

	n2 = n;
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (n2 < 0)
		return (i + 2);
	return (i + 1);
}

char				*ft_itoa(int n)
{
	int				count;
	char			*mass;

	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	count = ft_count(n);
	mass = ft_memory(count, n);
	return (mass);
}
