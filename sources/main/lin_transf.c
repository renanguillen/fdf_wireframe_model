/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lin_transf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:01:02 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/09/07 00:17:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf.h"

void	lin_transf(t_data *data, int i, int j)
{
	data->dot[i][j].y = ((WINDOW_HEIGHT / 2)  - (data->cols * data->scalei));
	data->dot[i][j].y -= (data->dot[i][j].z);
	data->dot[i][j].y += (i * data->scalei);
	data->dot[i][j].y += (j * data->scalei);
	data->dot[i][j].x = ((WINDOW_WIDTH / 1.2) - (data->rows * data->scalej));
	data->dot[i][j].x -= (i * data->scalej);
	data->dot[i][j].x += (j * data->scalej);
}