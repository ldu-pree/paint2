# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/09 15:41:21 by ldu-pree          #+#    #+#              #
#    Updated: 2019/07/16 16:01:28 by ldu-pree         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = paint.a
SRC = main.c \
	  grid.c \
	  square.c \
	  right.c \
	  up.c \
	  down.c \
	  place.c \
	  selectt.c \
	  ../gnl/get_next_line.c \
	  ../gnl/libft/ft_atoi.c \
	  ../gnl/libft/ft_putchar.c \
	  ../gnl/libft/ft_memset.c \
	  ../gnl/libft/ft_strcat.c \
	  ../gnl/libft/ft_strcmp.c \
	  ../gnl/libft/ft_strcpy.c \
	  ../gnl/libft/ft_strncat.c \
	  ../gnl/libft/ft_bzero.c \
	  ../gnl/libft/ft_memcpy.c \
	  ../gnl/libft/ft_memccpy.c \
	  ../gnl/libft/ft_strlen.c \
	  ../gnl/libft/ft_strmapi.c \
	  ../gnl/libft/ft_strdup.c \
	  ../gnl/libft/ft_memmove.c \
	  ../gnl/libft/ft_memchr.c \
	  ../gnl/libft/ft_memcmp.c \
	  ../gnl/libft/ft_strncpy.c \
	  ../gnl/libft/ft_strlcat.c \
	  ../gnl/libft/ft_strchr.c \
	  ../gnl/libft/ft_strrchr.c \
	  ../gnl/libft/ft_strstr.c \
	  ../gnl/libft/ft_strnstr.c \
	  ../gnl/libft/ft_strncmp.c \
	  ../gnl/libft/ft_isdigit.c \
	  ../gnl/libft/ft_isalpha.c \
	  ../gnl/libft/ft_isalnum.c \
	  ../gnl/libft/ft_isascii.c \
	  ../gnl/libft/ft_isprint.c \
	  ../gnl/libft/ft_toupper.c \
	  ../gnl/libft/ft_tolower.c \
	  ../gnl/libft/ft_memalloc.c \
	  ../gnl/libft/ft_memdel.c \
	  ../gnl/libft/ft_strnew.c \
	  ../gnl/libft/ft_strdel.c \
	  ../gnl/libft/ft_strclr.c \
	  ../gnl/libft/ft_striter.c \
	  ../gnl/libft/ft_striteri.c \
	  ../gnl/libft/ft_strmap.c \
	  ../gnl/libft/ft_strequ.c \
	  ../gnl/libft/ft_strnequ.c \
	  ../gnl/libft/ft_strsub.c \
	  ../gnl/libft/ft_strjoin.c \
	  ../gnl/libft/ft_strtrim.c \
	  ../gnl/libft/ft_strsplit.c \
	  ../gnl/libft/ft_itoa.c \
	  ../gnl/libft/ft_putstr.c \
	  ../gnl/libft/ft_putendl.c \
	  ../gnl/libft/ft_putnbr.c \
	  ../gnl/libft/ft_putchar_fd.c \
	  ../gnl/libft/ft_putstr_fd.c \
	  ../gnl/libft/ft_putendl_fd.c \
	  ../gnl/libft/ft_putnbr_fd.c \
	  ../gnl/libft/ft_is_whitespace.c \
	  ../gnl/libft/ft_count_word.c \
	  ../gnl/libft/ft_lstnew.c \
	  ../gnl/libft/ft_lstdelone.c \
	  ../gnl/libft/ft_lstdel.c \
	  ../gnl/libft/ft_lstadd.c \
	  ../gnl/libft/ft_lstiter.c \
	  ../gnl/libft/ft_lstmap.c \
	  ../gnl/libft/ft_len_word.c \


OBJ = $(SRC:%.c=%.o)

all:
	gcc -c $(SRC)
	gcc -g $(SRC) mlx/libmlx.a -lmlx -framework OpenGL -framework AppKit
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

ree: fclean all
	./paint 1000 1000 10
