/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:27:36 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 22:28:24 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_arg(char *argv, int size)
{
	int	i;
	int	arg;

	i = 0;
	array = malloc((size * size) * sizeof(char));
	arg = ft_atoi(argv);
	while (i < (size * 4))
	{
		if (argc[i] > size + '0')
			return (0);
		else if (ft_array_size(argv) > (size * 4))
			return (0);
	}
	return (1);
}