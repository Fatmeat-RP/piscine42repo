
#ifndef _RUSH01_H
#define _RUSH01_H

int	ft_putstr_sizelen(char *str, int size);

int		ft_get_size(char *str);

char	**ft_array(char *str, int size);

int		ft_OK(char **array, int size);

void	ft_no_array(char **array, int size);

int		ft_col(char **array, int y, int z, int size);

int		ft_row(char **array, int x, int z, int size);

int		ft_is_same(char **array, int x, int y, int size);

#endif