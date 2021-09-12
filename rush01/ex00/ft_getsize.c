/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:23:41 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:23:41 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_OK(char *str, int size, int len)
{
	int i;
	int j;

	i = -1;
	j = len / size;
	while (++i < size)
	{
		if (*str < '1' || *str > j + '0')
			return (0);
		str += 2;
	}
	return (j);
}

int		ft_get_size(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			size++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	if (size != 16)
		return (0);
	return (ft_OK(str, size));
}
