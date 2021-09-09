/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:50:43 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 16:26:42 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0x00)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[i])
		{
			i = 1;
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		i++;
	}
	return (0);
}
