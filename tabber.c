/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarias-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:37:46 by rarias-p          #+#    #+#             */
/*   Updated: 2019/10/23 22:07:35 by rarias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int		ft_tab_count(char **ctab)
{
	int		i;
	int		j;

	j = 0;
	while (ctab[i][j] != '\0')
	{
		i = 0;
		while (ctab[i][j] != '\n')
			i++;
		j++;
	}
	return (j);
}

int		ft_col_count(char **ctab)
{
	int i;

	i = 0;
	while (ctab[i][1] != '\n')
		i++;
	return (i);
}

char	*ft_symbols(char **ctab)
{
	int		i;
	int		j;
	char	*symbols;

	symbols = malloc(sizeof(char) * 3);
	while (ctab[i][0] != '\n')
		i++;
	symbols[0] = ctab[i - 1][0];
	symbols[1] = ctab[i - 2][0];
	symbols[2] = ctab[i - 3][0];
	return (symbols);
}

int		**ft_char_to_int(char **ctab, int len, char *symbols)
{
	int i;
	int j;
	int **itab;

	itab = malloc(sizeof(int) * len);
	j = 1;
	while (ctab[i][j] != '\0')
	{
		i = 0;
		while (ctab[i][j] != '\n')
		{
			if (ctab[i][j] == symbols[1])
				itab[i][j] = 0;
			if (ctab[i][j] == symbols[2])
				itab[i][j] = 1;
			i++;
		}
		j++;
	}
	return (itab);
}
