int		ft_recursive_power(int nb, int exp)
{
	int n;

	n = nb;
	if ((n > n * nb) || (exp < 0))
		return (0);
    else if (exp == 0)
        return (1);
	else
		return (n * ft_recursive_power(n, exp - 1));	
	return (n);
}
