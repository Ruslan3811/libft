int		ft_atoi(const char *str)
{
	int					i;
	unsigned long int	b;
	int					sign;

	b = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = b * 10 + (str[i] - 48);
		i++;
	}
	(sign == 1 && b > 9223372036854775807) ? b = (int)-1 : 0;
	(sign == -1 && b > 9223372036854775807) ? b = (int)0 : 0;
	return (sign * b);
}
