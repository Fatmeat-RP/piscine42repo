void	ft_rev_str(char *str)
{
	int temp;
	int i;
	int half;
	int size;

	i = 0;
	temp = 0;
	size = 0;
	while (str[i++])
		size++;
	i = 0;
	half = size / 2;
	if (*str == '-')
		i++;
	while (half-- > 0)
	{
		temp = str[i];
		str[i++] = str[size - 1];
		str[size-- - 1] = temp;
	}
}
