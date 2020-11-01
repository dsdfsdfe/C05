int		ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = power;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 0)
	{
		j *= nb;
		i--;
	}
	return (j);
}
