/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:15:11 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/08/23 21:33:18 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf.h"

void	get_lines(int argc, char **argv, t_data *data)
{
	int	fd;
	int	i;

	i = 0;
	fd = check_args(argc, argv);
	data->rows = count_lines(argv[1]);
	data->lines = malloc(sizeof (char *) * (data->rows + 1));
	found_error ((void **)data->lines);
	while (i < data->rows)
		data->lines[i++] = get_next_line(fd);
	data->lines[i] = NULL;
	i = 0;
	data->split = ft_split(data->lines[i], ' ');
	data->cols = ft_splitlen(data->split);
	data->diag = sqrt((data->cols * data->cols) + (data->rows * data->rows));
	data->area = (data->cols * data->rows);
	printf("Linhas:%d\n", data->rows);
	printf("Colunas:%d\n", data->cols);
	printf("Diagonal:%f\n", data->diag);
	printf("Area:%f\n", data->area);
	ft_matrixfree((void **)data->split);
}