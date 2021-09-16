/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:47:27 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/16 07:35:03 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_in_base(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] != base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = -1;
		while (base[++j])
		{
			if (i == j)
				break ;
			if (base[i] == base[j])
				return (0);
		}		
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	i;
	int		n;
	int		sign;

	if ((ft_in_base(str, base)) == 0)
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
	while (ft_in_base(str, base) >= 0)
	{
		n = n * i + ft_in_base(str, base);
		i++;
	}
	return (n * sign);
}

char	ft_put_base(char *base, int size, long n)
{
	int	i;

	i = 0;
	while (base[i])
	{
		ft_put_base(base, size, n / size);
		n = n % size;
	}
	return (base[n]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		i;
	int		n;
	int		j;

	i = -1;
	n = ft_atoi_base(nbr, base_from);
	while (base_to[++i])
		if (base_to[i] == 0x2B || base_to[i] == 0x2D || base_to[i] == ' '
			|| ft_base_check(base_to) || base_to[i] == 0x00
			|| (base_to[i] >= 9 && base_to[i] <= 13))
			return (0);
	if (i < 2)
		return (nbr);
	str = malloc(i * sizeof(char));
	j = 0;
	while (j < i)
	{
		str[j] = ft_put_base(base_to, i, j);
		j++;
	}
	return (str);
}

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}
