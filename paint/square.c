/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:23:36 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 15:07:19 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

void	square()
{
	int i;
	int j;

	i = 0 - pix;
	j = 0;
	ox = ox - pix;
	while (i <= 0)
	{
		j = 0;
		while (j <= pix)
		{
			mlx_pixel_put(mlx, win, ox - i, oy - j + pix, colour);
		j++;
		}
		i++;
	}
	//ox = ox - i + 1;
}