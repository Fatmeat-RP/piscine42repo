/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:36:12 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 00:13:22 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0x00)
	{
		if (str[i] >= 0x41 && str[i] <= 0x5A)
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[0] >= 0x61 && str[0] <= 0x7A)
			str[i] -= 32;
	i++;
	while (str[i] != 0x00)
	{
		if(!((str[i - 1] >= 0x41 && str[i - 1] <= 0x5A)
			|| (str[i - 1] >= 0x61 && str[i - 1] <= 0x7A)
			|| (str[i - 1] >= 0x30 && str[i - 1] <= 0x39))
		&& (str[i] >= 0x61 && str[i] <= 0x7A))
			str[i] -= 32;
		i++;
	}
	str[i] = 0x00;
	return (str);
}

/*#include <stdio.h>

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
}
*/