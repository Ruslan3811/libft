int		ft_toupper(int nbr)
{
	if (nbr <= 'z' && nbr >= 'a')
		return (nbr - 32);
	return (nbr);
}
