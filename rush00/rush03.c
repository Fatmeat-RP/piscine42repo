/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 22:58:54 by mbrouty           #+#    #+#             */
/*   Updated: 2021/09/03 22:58:54 by mbrouty          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_ln(int x, int y, int v, int h)
{
	if (v == 0 || v == y)
	{
		if (h == 0)
			ft_putchar('A');
		else if (h == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (h == 0 || h == x)
			ft_putchar('B');
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
