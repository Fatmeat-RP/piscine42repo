/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:33:04 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/10 16:33:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb > 2147483647 || nb < -2147483647)
            return (0);
    else if (nb == 0)
            return (0);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}
