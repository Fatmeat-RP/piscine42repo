/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:07:44 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 22:29:12 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_put_array(int **str, int size);

char	ft_array_fill(char **array, int size);

void	ft_valid_arg(char *arg, int size);

#endif