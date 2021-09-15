/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:15:04 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/15 21:08:31 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == 0x2B || base[i] == 0x2D || base[i] == ' '
			|| base[i] == 0x00)
			return (0);
		if (base_len(base) < 2)
			return (0);
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	i;
	int		n;
	int		sign;

	if (!(ft_check_base(base)))
		return (0);
	i = 0;
	sign = 1;
	while (((str[i] == 0x20) || (str[i] == 0x09)
			|| (str[i] >= 0x0A && str[i] <= 0x0D)))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	n = 0;
	while (ft_in_base(str[i], base) >= 0)
	{
		n = n * base_len(base) + ft_in_base(str[i], base);
		i++;
	}
	return (n * sign);
}
