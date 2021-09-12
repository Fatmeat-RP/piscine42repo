/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:19:03 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/10 16:19:03 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int n;

    n = nb;
    if (nb == 0)
        return (0);
    while (nb >= 1)
    {
        if (nb > 2147483647 || nb < -2147483647)
            return (0);
        nb *= --nb;
    }
    return (nb);
}
