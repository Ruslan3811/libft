int		ft_tolower(int nbr)
{
	if (nbr <= 'Z' && nbr >= 'A')
		return (nbr + 32);
	return (nbr);
}
