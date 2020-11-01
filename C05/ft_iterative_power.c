int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		res;

	i = power;
	res = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		res = res * nb;
		i--;
	}
	return (res);
}


int		ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	i = power - 1;
	while (i--)
		res *= nb;
	return (res);
}