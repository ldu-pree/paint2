/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:10 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 16:03:02 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "paint.h"
#include "../gnl/get_next_line.h"

int		keypress(int keycode, void *param)
{
	printf("key = %d\n", keycode);
	if (keycode == 123 && ox >= pix && oy >= 25)
	{
		square();
		printf("left\n");
	}
	if (keycode == 124 && ox <= maxx - pix - pix && oy >= 25)
	{
		right();
		printf("right\n");
	}
	if (keycode == 125 && oy <= maxy - pix - pix && oy >= 25)
	{
		down();
		printf("down\n");
	}
	if (keycode == 126 && oy >= pix + 25)
	{
		up();
		printf("up\n");
	}
	return (0);
}

int		my_mouse_funct(int button, int x, int y, void *param)
{
	if (button == 1 && y > 30)
	{
		int x_d;
		int y_d;
		x_d = x / pix;
		y_d = y / pix;
		ox = (round(x_d) * pix);
		oy = (round(y_d) * pix);
		place();
	}
	if (button == 1 && y < 20)
	{
		if (x < maxx / 4)
			colour = 0x00ff0000;
		if (x < 2 * maxx / 4 && x > maxx / 4)
			colour = 0x0000ff00;
		if (x < 3 * maxx / 4 && x > 2 * maxx / 4)
			colour = 0x000000ff;
		if (x < maxx && x > 3 * maxx / 4)
			colour = 0x00000000;
	}
	return (0);
}

int		main(int ac, char **av)
{
	char *str;
	char *nr;
	int res;
	int fd;
	int i;
	int l;
	int c;
	int t;
	int y;
	int count_lines = 0;
	char chr;
	colour = 0x00000000;
	ox = 100;
	oy = 100;
	i = 0;
	l = 0;
	c = 0;
	t = 0;
	y = 0;
	while (av[1][i] != '\0')
		i++;
	if (ac == 4 && atoi(av[1]) <= 2000 && atoi(av[2]) <= 2000 && atoi(av[3]) <= 2000)
	{
		maxy = atoi(av[1]);
		maxx = atoi(av[2]);
		pix = atoi(av[3]);
		mlx = mlx_init();
		win = mlx_new_window(mlx, maxx, maxy, "Paint 42");
		grid(maxx, maxy, pix);
		selectt();
	}
	else if (ac == 3 && av[1][i - 1] == 't' && av[1][i - 2] == 'x' && av[1][i - 3] == 't')
	{
		maxy = 0;
		maxx = 0;
		pix = atoi(av[2]);
		fd = open(av[1], O_RDWR);
		str = (char *)malloc(1000);
		nr = (char *)malloc(1000);
		while (get_next_line(fd, &str))
			y++;
		maxy = 3 * pix + y * pix;
		fd = open(av[1], O_RDWR);
		get_next_line(fd, &str);
		l = 0;
		t = 0;
		while (str[l] != '\0')
		{
			if (str[l] == '1' || str[l] == '0' || str[l] == '2' || str[l] == '3' || str[l] == '4')
			{
				maxx = maxx + pix;
				nr[t] = str[l];
				t++;
			}
			l++;
		}
		mlx = mlx_init();
		win = mlx_new_window(mlx, maxx, maxy, "Paint 42");
		grid(maxx, maxy, pix);
		selectt();
		nr[t] = '\0';
		printf("%s\n%s\n", str, nr);
		i = 0;
		c = 3;
		while (nr[i] != '\0')
		{
			if 	(nr[i] == '1')
			{	
				colour = 0x00ff0000;
				ox = i * pix;
				oy = c * pix;
				place();
				}
			if (nr[i] == '2')
			{
				colour = 0x0000ff00;
				ox = i * pix;
				oy = c * pix;
				place();
			}
			if (nr[i] == '3')
			{
				colour = 0x000000ff;
				ox = i * pix;
				oy = c * pix;
				place();
			}
			if (nr[i] == '4')
			{
				colour = 0x00000000;
				ox = i * pix;
				oy = c * pix;
				place();
			}
			i++;
		}
		c++;
		while (get_next_line(fd, &str))
		{
			l = 0;
			t = 0;
			while (str[l] != '\0')
			{
				if (str[l] == '1' || str[l] == '0' || str[l] == '2' || str[l] == '3' || str[l] == '4')
				{
					maxx = maxx + pix;
					nr[t] = str[l];
					t++;
				}
				l++;
			}
			nr[t] = '\0';
			printf("%s\n%s\n", str, nr);
			i = 0;
			while (nr[i] != '\0')
			{
				if 	(nr[i] == '1')
				{	
					colour = 0x00ff0000;
					ox = i * pix;
					oy = c * pix;
					place();
					}
				if (nr[i] == '2')
				{
					colour = 0x0000ff00;
					ox = i * pix;
					oy = c * pix;
					place();
				}
				if (nr[i] == '3')
				{
					colour = 0x000000ff;
					ox = i * pix;
					oy = c * pix;
					place();
				}
				if (nr[i] == '4')
				{
					colour = 0x00000000;
					ox = i * pix;
					oy = c * pix;
					place();
				}
				i++;
			}
			c++;
		}
	}
	mlx_key_hook(win, keypress, 0);
	mlx_mouse_hook(win, my_mouse_funct, 0);
	mlx_loop(mlx);
}
