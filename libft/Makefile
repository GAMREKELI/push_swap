# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdursley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 20:05:45 by pdursley          #+#    #+#              #
#    Updated: 2021/10/25 20:05:47 by pdursley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = ft_isalnum.c ft_toupper.c ft_strnstr.c ft_bzero.c\
		ft_isalpha.c ft_isascii.c ft_strlcpy.c ft_isdigit.c\
		ft_atoi.c ft_isprint.c ft_memchr.c ft_memcpy.c\
		ft_memcmp.c ft_memmove.c ft_strchr.c ft_memset.c\
		ft_strlcat.c ft_strlen.c ft_strncmp.c ft_tolower.c\
		ft_strrchr.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c

LIST_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c\
			ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

OBJ = $(patsubst %.c,%.o,$(LIST))

OBJ_B = $(patsubst %.c,%.o,$(LIST_B))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c libft.h
	cc $(FLAGS) -c $< -o $@

bonus :
	make OBJ="$(OBJ_B)" all

clean :
	rm -f $(OBJ) $(OBJ_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONNY : all clean fclean re bonus
