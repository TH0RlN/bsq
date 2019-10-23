/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarias-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:30:28 by rarias-p          #+#    #+#             */
/*   Updated: 2019/10/23 22:06:05 by rarias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int		ft_counter(char **argv, int i)
{
	int		fd;
	int		rfd;
	int		len;

	fd = open(argv[i], O_RDONLY);
	if (fd < 0)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	while (rfd == 30)
	{
		rfd = read(fd, 0, 30);
		if (rfd == 30)
			len += 30;
	}
	len += rfd;
	close(fd);
	return (len);
}

char	*ft_map_read(char **argv, int i, int len)
{
	int		j;
	int		fd;
	char	*mapstr;

	mapstr = malloc(len * sizeof(char));
	fd = open(argv[i], O_RDONLY);
	j = 0;
	while (j < len)
	{
		read(fd, &mapstr[j], 1);
		j++;
	}
	close(fd);
	return (mapstr);
}

void	ft_str_to_tab(char *mapstr, int len, char **tab)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = 0;
	j = 0;
	while (mapstr[k] != '\0')
	{
		tab[i][j] = mapstr[k];
		i++;
		if (mapstr[k] == '\n')
		{
			i = 0;
			j++;
		}
		k++;
	}
}
