/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:23:34 by egallego          #+#    #+#             */
/*   Updated: 2019/10/23 23:35:59 by rarias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBRARY_H
# define	LIBRARY_H
# define	MAP_ERROR "map error"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_printsol(int **map, char *cond, int col, int row);
int		ft_map_maker(char **argv, int i);
int		ft_counter(char **argv, int i);
char	*ft_map_read(char **argv, int i, int len);
void	ft_str_to_tab(char *mapstr, int len, char **tab);
void	ft_tab_maker(char **ctab, int len);
char	**ft_map_maker(char **argv, int i);
int		ft_counter(char **argv, int i);
char	*ft_map_read(char **argv, int i, int len);
void	ft_str_to_tab(char *mapstr, int len, char **tab);
int		**ft_tab_maker(char **ctab, int len);
int		ft_tab_count(char **ctab);
int		ft_col_count(char **ctab);
char	*ft_symbols(char **ctab);
int		**ft_char_to_int(char **ctab, int len, char *symbols);
int		**ft_find_square(int **map, int row, int col);
int		firstline(char *str);
int		min_val(int a, int b, int c);
void	max_possible_square(int **map, int row, int col, int max);
void	max_val(int **map, int row, int col);
void	ft_find_square(int **map, int row, int col, char *symbols);
int		numrows(char *str, int i);
int		numcolum(char *str, int i);

#endif
