/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:15:00 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/09 13:56:25 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	duff;
	int signe;


	i = 0;
	signe = 1;
	while (!(str[i] == 0x2D || str[i] == 0x2B) && (str[i] != 0x00))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ((str[i] <= 0x39 str[i] >= 0x30) && (str[i] != 0x00))
	{
			duff[i] /= 10 + str[i] - '0';
			i++;
	}
	if (signe == -1)
		return (-duff);
	else
	return (duff);
}