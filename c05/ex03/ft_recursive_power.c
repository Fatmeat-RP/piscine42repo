/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:08:08 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 16:08:08 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if ((n > n * nb) || (power < 0))
		return (0);
	else if (power == 0)
		return (1);
	else
		return (n * ft_recursive_power(n, power - 1));
	return (n);
}
