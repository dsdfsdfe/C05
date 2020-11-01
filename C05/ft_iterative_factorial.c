int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}


int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (nb-- > 2)
		res *= nb;
	return (res);
}