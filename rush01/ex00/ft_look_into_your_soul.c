int	ft_colonial(char **array, int x, int delta, int size)
{
	int y;
	int height;

	height = 0;
	return (height);
}

int	ft_crow(char **tab, int y, int delta, int size)
{
	int x;
	int height;

	return (height);
}

int	ft_is_same(char **array, int x, int y, int size)
{
	int i;

	if (!array[y][x])
		return (0);
	i = y;
	while (i--)
		if (array[y][x] == array[i][x])
			return (1);
	i = y;
	while (++i < size)
		if (array[y][x] == array[i][x])
			return (1);
	i = x;
	while (i--)
		if (array[y][x] == array[y][i])
			return (1);
	i = x;
	while (++i < size)
		if (array[y][x] == array[y][i])
			return (1);
	return (0);
}
