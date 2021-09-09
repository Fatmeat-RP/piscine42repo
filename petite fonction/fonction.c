/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:24:26 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/04 12:34:06 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pout(char c, int n)
{
	write(1, &c, n);
}

void	string_length(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

void	str_print(char c)
{
	char *str;

	*str = c;
	string_length(c);
	pout(c, length);
}

int	main(void)
{
	str_print("Hello World");
}
