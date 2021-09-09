/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 03:08:05 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/06 01:52:50 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;

	p = 0;
	while (++p < size)
	{
		if (tab[p - 1] > tab[p])
		{
			swap(&tab[p - 1], &tab[p]);
			p = 0;
		}
		else
			p++;
	}
}

/*void	ft_print_int_array(int *tab, int size)
{
	int i;
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main()
{
   	int tab[] = {3, 2, 5, 6, 8, 7, 9};
   	ft_sort_int_tab(tab, 7);
	ft_print_int_array(tab, 7);
    	return 0;
}*/
