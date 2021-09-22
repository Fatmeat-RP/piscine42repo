/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:27:40 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	**null_output(void)
{
	char	**output;

	output = malloc(sizeof(char *));
	if (!output)
		return (NULL);
	output[0] = malloc(sizeof(char));
	if (!output[0])
		return (NULL);
	output[0] = 0;
	return (output);
}

int	ft_read_len(char *path)
{
	int		file_descriptor;
	int		bytes_read;
	int		map_len;
	char	buf;

	map_len = 0;
	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	while (1)
	{
		bytes_read = read(file_descriptor, &buf, 1);
		if (bytes_read < 1)
			break ;
		map_len += bytes_read;
	}
	close(file_descriptor);
	return (map_len);
}

char	**ft_get_map(char *path)
{
	char	*map_content;
	char	**map_content_splited;
	int		map_len;
	int		file_descriptor;

	map_len = ft_read_len(path);
	map_content = malloc(sizeof(char) * (map_len + 1));
	if (!map_content)
		return (null_output());
	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (null_output());
	if (read(file_descriptor, map_content, map_len) < 1)
		return (null_output());
	close(file_descriptor);
	map_content[map_len] = 0;
	if (are_empy_lines_in_str(map_content))
		return (null_output());
	map_content_splited = ft_split(map_content, "\n");
	free(map_content);
	return (map_content_splited);
}
