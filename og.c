/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   og.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 21:28:47 by egallego          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/10/23 23:26:13 by rarias-p         ###   ########.fr       */
=======
/*   Updated: 2019/10/23 22:02:25 by egallego         ###   ########.fr       */
>>>>>>> 94487342833433045d5aa104e29463b1950b8d55
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int		firstline(char *str)
{
	int		i;
	char	obst;
	char	empty;
	int		rows;

	i = 0;
	rows = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	if (i < 5)
		return (-1);
	str[i - 1] = full;
	str[i - 2] = obst;
	str[i - 3] = empty;
	if ((obst == empty) || (empty == full) || (full == obst))
		return (-1);
	return (0);
}

int		numrows(char *str, int i)
{
	int j;
	int h;

	j = 0;
	h = 0;
	while (str[j] != str[i - 4])
	{
		rows *= 10;
		rows += str[j] - 48;
		j++;
	}
	while (str[i + 1] != '\0')
	{
		if (str[i] == '\n')
		{
			h++;
		}
		i++;
	}
	if (rows != h)
		return (-1);
	return (0);
}

int		numcolum(char *str, int i)
{
	int c;
	int b;
	int bluecolum;

	c = 0;
	bluecolum = 0;
	while (str[i + 1] != '\n')
	{
		c++;
		i++;
	}
	bluecolum = c;
	while (str[i + 1] != '\0')
	{
		b = 0;
		while (str[i + 1] != '\n')
		{
			i++;
			b++;
		}
		if (b != bluecolum)
			return (-1);
		i++;
	}
	return (0);
}
