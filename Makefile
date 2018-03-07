# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: famartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 10:12:05 by famartin          #+#    #+#              #
#    Updated: 2018/03/05 21:36:46 by famartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Iincludes -Wall -Wextra -Werror
NAME =  libft.a
OBJ = *.o
FILES = libft.h\
		ft_is_blank.c\
		ft_skip_preceding.c\
		ft_hello_world.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_strnew.c\
		ft_get_int_len.c\
		ft_get_word_len.c\
		ft_countwords.c\
		ft_putstr_fd.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_isalpha.c\
		ft_has_whitespaces.c\
		ft_atoi.c\
		ft_strncmp.c\
		ft_strcmp.c\
		ft_strnstr.c\
		ft_strstr.c\
		ft_strrchr.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strncat.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_putendl.c\
		ft_putchar_fd.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_strtrim.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strsplit.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS ) -c $(FILES)
	ar cr $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

