int		ft_sqrt(int nb)
{
	long n;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}


int		ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return ((int)i);
	else
		return (0);
}
