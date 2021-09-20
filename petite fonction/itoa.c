char	*itoa(int nb, int len_base, char *base)
{
	int				i;
	unsigned int	n;
	char			*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * 34)))
		return (0);
	i = 0;
	if (nb < 0)
	{
		tmp[i++] = '-';
		n = nb * -1;
	}
	else
		n = nb;
	if (n == 0)
		tmp[i++] = base[0];
	while (n)
	{
		tmp[i++] = base[n % len_base];
		n /= len_base;
	}
	tmp[i] = '\0';
	ft_rev_s(tmp);
	return (tmp);
}
