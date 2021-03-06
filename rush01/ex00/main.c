/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:42:52 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 22:28:25 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

int	main(void)
{
	char	*array;
	int		size;

	size = 6;
	array = malloc((size * size) * sizeof(char));
	ft_array_fill(array, size);
	ft_put_array(array, size);
}
