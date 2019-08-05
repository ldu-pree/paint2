/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:50 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 15:13:32 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PAINT_H
# define PAINT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "mlx/mlx.h"
# include <math.h>
# include <stdio.h>
# include "../gnl/get_next_line.h"
# include <fcntl.h>

int *mlx;
int *win;
int oy;
int ox;
int maxy;
int maxx;
int pix;
int colour;
void	grid(int width, int height, int gap);
void	square();
void	right();
void	place();
void	up();
void	down();
void	selectt();
#endif

