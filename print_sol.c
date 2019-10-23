/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarias-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 21:51:02 by rarias-p          #+#    #+#             */
/*   Updated: 2019/10/23 22:08:02 by rarias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, c, 1);
}

void	ft_printsol(int **map, char *cond, int col, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (map[i][j] == -1)
				put_char(cond[2]);
			if (map[i][j] == 0)
				put_char(cond[1]);
			if (map[i][j] >= 1)
			{
				put_char(cond[0]);
			}
			j++;
		}
		put_char('\n');
		i++;
	}
}
