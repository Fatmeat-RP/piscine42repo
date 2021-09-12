/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:44:25 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 12:44:25 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstr_sizelen(char **array, int size, int x, int y)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (j < y)
    {
        if (i == size)
        {
            write(1, '\n', 1);
        }
            
        write(1, str[i], 1);
        j++;
    }
    return (i);
}
