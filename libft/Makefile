# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sankosi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/06 09:55:53 by sankosi           #+#    #+#              #
#    Updated: 2018/06/25 15:31:52 by sankosi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c -I includes/
FILES =	ft_isprint.c \
		ft_lstnew.c \
		ft_lstadd.c \
		ft_striter.c \
		ft_strsplit.c \
		ft_strlcat.c \
		ft_isspace.c \
		ft_toupper.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strdel.c \
		ft_strnequ.c \
		ft_itoa.c \
		ft_strncat.c \
		ft_memdel.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_putnbr_fd.c \
		ft_strdup.c	\
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_putstr.c \
		ft_memchr.c \
		ft_strequ.c \
		ft_memalloc.c \
		ft_strsub.c \
		ft_atoi.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_bzero.c \
		ft_putchar.c \
		ft_strcat.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_putchar_fd.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_putendl.c \
		ft_strclr.c \
		ft_strncpy.c \
		ft_memcmp.c \
		ft_isascii.c \
		ft_putendl_fd.c \
		ft_strcmp.c \
		ft_strnew.c \
		ft_isdigit.c \
		ft_putnbr.c \
		ft_strcpy.c \
		ft_strrchr.c \
		
OBJ=$(FILES:.c=.o)

all:$(NAME)
$(NAME):$(FILES)
	clang $(FLAGS) $(FILES)
	ar -rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean all

