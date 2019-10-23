/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarias-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:20:24 by rarias-p          #+#    #+#             */
/*   Updated: 2019/10/23 23:25:50 by rarias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	ft_map_maker(char **argv, int i)
{
	int		len;
	char	*mapstr;
	char	**tab;
	int		errorc;

	errorc = 0;
	error = malloc(2);
	len = ft_counter(argv, i);
	if (len < 0)
		errorc--;
	mapstr = ft_map_read(argv, i, len);
	errorc += firstline(mapstr);
	tab = malloc(len * sizeof(char));
	ft_str_to_tab(mapstr, len, tab);
	ft_tab_maker(tab, len);
	
	return (errorc);

}

void	ft_tab_maker(char **ctab, int len)
{
	int		rown;
	int		coln;
	int		**itab;
	char	*symbols;

	rown = ft_tab_count(ctab);
	coln = ft_col_count(ctab);
	symbols = ft_symbols(ctab);
	itab = ft_char_to_int(ctab, len, symbols);
	ft_find_square(itab, rown, coln, symbols);
	
}
