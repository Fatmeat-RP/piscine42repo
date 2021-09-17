/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:47:27 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/17 02:21:05 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

int	ft_baselen(char *base)
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
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] == 0x00 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (ft_baselen(base) < 2)
			return (0);
		j = 0;
		while (base[j])
		{
			if (i == j)
				break ;
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	i;
	int		n;
	int		sign;

	if ((ft_check_base(base)) == 0)
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
		n = n * ft_baselen(base) + ft_in_base(str[i], base);
		i++;
	}
	return (n * sign);
}

char	*ft_int_tobase(int n)
{
	int	*str;
}

int	ft_mall_size(char *str, char *base_from, char *base_to)
{
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		i;
	int		n;
	int		j;

	n = ft_atoi_base(nbr, base_from);
	if ((ft_check_base(base_to)) == 0)
		return (0);
	str = malloc((i + 1) * ft_baselen(base_to) * sizeof(char));
	return (str);
}

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}
