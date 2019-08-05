/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:54:01 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/08/05 15:17:58 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	char *str;
	int res;
	int fd;
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	if (argv[1][i - 1] == 't' && argv[1][i - 2] == 'x' && argv[1][i - 3] == 't')
		fd = open(argv[1], O_RDWR);
	str = (char *)malloc(50);
    while (get_next_line(fd, &str) && argc == 2)
		printf("%s\n",str);
}
