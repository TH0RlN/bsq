/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver3_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:24:23 by aggarcia          #+#    #+#             */
/*   Updated: 2019/10/23 19:35:30 by aggarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min_val(int a, int b, int c)
{
	int min_aux;

	min_aux = a;
	if (b < min_aux)
		min_aux = b;
	if (c < min_aux)
		min_aux = c;
	return (min_aux);
}

void	max_possible_square(int **map, int row, int col, int max)
{
	int i;
	int j;

	i = row;
	while (i >= (row - max))
	{
		j = col;
		while (j >= (col - max))
		{
			map[i][j] = -1;
			j--;
		}
		i--;
	}
}

void	max_val(int **map, int row, int col)
{
	int i;
	int j;
	int max_value;
	int aux_i;
	int aux_j;

	i = 0;
	j = 0;
	max_value = 0;
	while (i < row)
	{
		j = 0;
		while (j < row)
		{
			if (map[i][j] > max_value)
			{
				max_value = map[i][j];
				aux_i = i;
				aux_j = j;
			}
			j++;
		}
		i++;
	}
	max_possible_square(map, aux_i, aux_j, max_value);
}

int		**ft_find_square(int **map, int row, int col)
{
	int i;
	int j;

	i = 0;
	while (++i < row)
	{
		j = 0;
		while (++j < col)
		{
			if (map[i][j] != 0)
			{
				map[i][j] = min_val(map[i - 1][j], map[i][j - 1],
						map[i - 1][j - 1]) + 1;
			}
		}
	}
	max_val(map, row, col);
	return (map);
}
