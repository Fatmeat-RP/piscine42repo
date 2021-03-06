/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:50:05 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:50:05 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	if (nb < 1)
		return (0);
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
