/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:46:04 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 15:07:54 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

void	down()
{
	int i;
	int j;

	i = 0;
	j = 0;
	oy = oy + pix;
	while (i <= pix)
	{
		j = 0;
		while (j <= pix)
		{
			mlx_pixel_put(mlx, win, ox + i, oy + j, colour);
		j++;
		}
		i++;
	}
	//oy = oy + j - 1;
}
