/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:19:20 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:35:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

#include "file/ft_read.c"
#include "function/ft_split/ft_split.c"
#include "function/ft_is_something/ft_is_number.c"
#include "function/ft_is_something/ft_is_printable.c"
#include "function/ft_is_something/ft_are_empty_lines_in_str.c"
#include "function/ft_is_something/ft_is_in_charset.c"
#include "parsing/validation/ft_validate_map.c"
#include "parsing/clean/ft_clean_map.c"
#include "parsing/clean/ft_clean_tab.c"
#include "function/ft_strlen/ft_strlen.c"
#include "parsing/mapping/ft_map_char_to_int.c"
#include "diagorythm/solve_map.c"
#include "diagorythm/ft_compute.c"
#include "function/ft_map_int_to_char/ft_map_int_to_char.c"

int	main(int ac, char **av)
{
	ac--;
	av++;
	while (ac)
	{
		solve_args(*av);
		av++;
		ac--;
	}
	return (0);
}
