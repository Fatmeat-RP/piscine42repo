/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 22:05:41 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/23 13:01:43 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_numberofword(char *src, char *charset)
{
	int	i;
	int	j;
	int	n;

	n = 0;
	i = 0;
	while (src[i])
	{
		j = 0;
		while (charset[j])
		{
			if (src[i] == charset[j] && src[i - 1] != charset[j - 1])
			{
				n++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", n);
	return (n);
}

int	main(int argc, char **argv)
{
	printf("%d\n", ft_numberofword("fastoche   fastoche   fastoshe", " o"));
}
