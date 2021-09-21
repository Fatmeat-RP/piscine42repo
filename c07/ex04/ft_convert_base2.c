/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:28:25 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/20 23:38:50 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base, int size);
int	ft_numberlen(int nb);
int	ft_check_base(char *base);
int	ft_in_base(char c, char *base);

void	ft_reverse_str(char *str)
{
	int	n;
	int	i;
	int	half;
	int	size;

	i = 0;
	n = 0;
	size = 0;
	while (str[i++])
		size++;
	i = 0;
	half = size / 2;
	if (*str == '-')
		i++;
	while (half > 0)
	{
		n = str[i];
		str[i++] = str[size - 1];
		str[size - 1] = n;
		half--;
		size--;
	}
}

char	*itoa(int nb, int baselen, char *base)
{
	int				i;
	unsigned int	n;
	char			*str;

	str = malloc(sizeof(char) * ft_numberlen(nb));
	if (!(str))
		return (0);
	i = 0;
	if (nb < 0)
	{
		str[i++] = '-';
		n = nb * -1;
	}
	else
		n = nb;
	if (n == 0)
		str[i++] = base[0];
	while (n)
	{
		str[i++] = base[n % baselen];
		n /= baselen;
	}
	str[i] = '\0';
	ft_reverse_str(str);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*str;
	int		i;
	int		n;
	int		size;

	n = ft_check_base(base_from);
	size = ft_check_base(base_to);
	if (!(n && size))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, n);
	i = (ft_numberlen(nb) + 1);
	str = itoa(nb, size, base_to);
	return (str);
}
