/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 22:27:43 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 06:42:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0

# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG "I have an odd number of arguments. \n"
# define SUCCESS 0

# define EVEN(nbr) nbr % 2 == 0

#endif