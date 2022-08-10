/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:10:42 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/08/10 19:13:49 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	write_matrix(t_data *data)
{
	int		i;

	i = 0;
	while (data->matrix.lines[i])
	{
		data->matrix.dot[i] = malloc(sizeof (t_dot) * data->matrix.col_count);
		found_error((void **) &data->matrix.dot[i]);
		data->matrix.split = ft_split(data->matrix.lines[i], ' ');
		get_arguments(data, i);
		ft_matrixfree((void **)data->matrix.split);
		i++;
	}
}