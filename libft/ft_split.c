#include "libft.h"

static char		**for_free(char **mass, int i)
{
	while (i)
	{
		free(mass[i - 1]);
		i--;
	}
	free(mass);
	return (NULL);
}

static char		**ft_columns(char **mass, int nbr, char const *s, char c)
{
	int			ind_true;
	int			ind_chr;
	int			i;

	ind_true = 0;
	ind_chr = 0;
	i = 0;
	while (i < nbr && s[ind_true] != '\0' && s[ind_chr] != '\0')
	{
		while (s[ind_chr] == c && s[ind_chr] != '\0')
			ind_chr++;
		ind_true = ind_chr;
		while (s[ind_true] != c && s[ind_true] != '\0')
			ind_true++;
		mass[i] = ft_substr(s, ind_chr, ind_true - ind_chr);
		if (!mass[i])
			return (for_free(mass, i));
		i++;
		ind_chr = ind_true;
	}
	mass[i] = NULL;
	return (mass);
}

static int		without_del(char const *s, char c)
{
	int			ind_true;
	int			ind_chr;
	int			nbr;

	nbr = 0;
	ind_chr = 0;
	ind_true = 0;
	while (s[ind_true] != '\0' && s[ind_chr] != '\0')
	{
		while (s[ind_chr] == c && s[ind_chr] != '\0')
			ind_chr++;
		ind_true = ind_chr;
		while (s[ind_true] != c && s[ind_true] != '\0')
			ind_true++;
		if (ind_true > ind_chr)
			nbr++;
		ind_chr = ind_true;
	}
	return (nbr);
}

char			**ft_split(char const *s, char c)
{
	int			nbr;
	char		**mass;

	if (!s)
		return (NULL);
	nbr = without_del(s, c);
	mass = (char**)malloc(sizeof(mass) * (nbr + 1));
	if (!mass)
		return (NULL);
	ft_columns(mass, nbr, s, c);
	return (mass);
}
