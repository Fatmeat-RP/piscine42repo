/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:21 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:30:19 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

typedef struct is {
	int	start;
	int	end;
	int	i;
}		t_is;

void	init_indexes(t_is *indexes)
{
	indexes->i = 0;
	indexes->start = 0;
	indexes->end = 0;
}

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_substr(char *str, char *charset)
{
	int	start;
	int	end;
	int	result;

	start = 0;
	end = 0;
	result = 0;
	while (str[end])
	{
		while (str[end] && !is_in_charset(str[end], charset))
			end++;
		if (start < end)
		{
			result++;
			start = end;
		}
		else
		{
			start++;
			end = start;
		}
	}
	return (result);
}

char	*ft_strcut(char *str, int min, int max)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (max - min) + 1);
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[i] = str[min];
		i++;
		min++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char		**split;
	t_is		is;

	init_indexes(&is);
	split = malloc(sizeof(char *) * (ft_count_substr(str, charset) + 1));
	while (str[is.end])
	{
		while (str[is.end] && !is_in_charset(str[is.end], charset))
			is.end++;
		if (is.start < is.end)
		{
			split[is.i] = malloc(sizeof(char) * ((is.end - is.start) + 1));
			split[is.i] = ft_strcut(str, is.start, is.end);
			is.i++;
			is.start = is.end;
		}
		else
		{
			is.start++;
			is.end = is.start;
		}
	}
	split[is.i] = 0;
	return (split);
}
