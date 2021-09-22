/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:00 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

/* Includes */
# include <unistd.h> // check the includes !
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/uio.h>

/* Structures */

typedef struct s_coordinate {
	int	x;
	int	y;
}				t_coordinate;

typedef struct s_diagonal {
	t_coordinate	up_left;
	t_coordinate	down_right;
}				t_diagonal;

typedef struct s_map_infos {
	int		lines_number;
	int		lines_len;
	char	charset[4];
}				t_map_infos;

/* Read and Write map */

char		**ft_get_map(char *path);
int			**ft_map_char_to_int(char **map, t_map_infos map_infos);

/* Checking */

int			ft_validate_map(char **map, t_map_infos *map_infos);

/* Utils */

char		**ft_split(char *str, char *charset);
int			is_number(char c);
int			is_printable(char c);
int			ft_is_in_charset(char c, char *charset);
int			are_empy_lines_in_str(char *str);
int			ft_strlen(char *str);

/* Processing */

int			ft_valid_square(t_diagonal diag, int **map);
t_diagonal	ft_big_square(t_coordinate coord, t_map_infos map_infos, int **map);
t_diagonal	ft_make_diagonal(t_coordinate a, t_coordinate b);
int			ft_compute_diag(t_diagonal diag);
char		**ft_map_int_to_char(int **map, t_map_infos mapinf);

/* Solving */

void		solve_map(int **map, t_map_infos map_infos);
void		solve_args(char *map_path);

/* Clean memory */

void		ft_clean_map(char **map);
void		ft_clean_tab(int **map, t_map_infos map_infos);

#endif