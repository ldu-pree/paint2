/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:44:06 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 15:07:32 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

void	right()
{
	int i;
	int j;

	i = 0;
	j = 0 - pix;
	ox = ox + pix;
	while (i <= pix)
	{
		j = 0 - pix;
		while (j <= 0)
		{
			mlx_pixel_put(mlx, win, ox + i, oy + j + pix, colour);
			j++;
		}
		i++;
	}
	//ox = ox + i - 1;
}
