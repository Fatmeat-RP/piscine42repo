/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:41:46 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:41:46 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int exp)
{
	int n;

	n = nb;
	if (exp < 0)
		return (0);
	if (exp == 0)
		return (1);
	while (exp > 1)
	{
		n *= nb;
		exp--;
	}
	return (n);
}
