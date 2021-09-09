
void	ft_putchar(char c);

void	print_ln(int x, int y, int v, int h)
{
	if (h == 0 || h == x)
	{
		if (v == 0 || (v == y && h == x))
			ft_putchar('/');
		else if (v == y)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if (v == 0 || v == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	v;
	int	h;

	v = -1;
	if (x < 0 || y < 0)
		return;
	while (v++ < y)
	{
		h = -1;
		while (h++ < x)
		{
			print_ln(x, y, v, h);
		}
		ft_putchar('\n');
	}
}
