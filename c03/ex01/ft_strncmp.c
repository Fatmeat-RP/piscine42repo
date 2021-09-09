/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:17:25 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/09 15:48:22 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != 0x00 && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1;
    char *s2;

    s1 = "dick1fqw0k";
    s2 = "dick1fw0kciikd";
    printf("%d", ft_strncmp(s1, s2, 6));
    printf("%d", strncmp(s1, s2, 6));
}
*/