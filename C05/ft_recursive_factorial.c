int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 2)
		return (nb);
	else if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
