NAME = push_swap

NAMECHECK = checker

LIST1	= ft_BigSort.c ft_check.c ft_checkSorted.c ft_clean.c ft_init.c ft_MaxMinMed.c ft_Rotate.c ft_RRotate.c \
			ft_SearchScore.c ft_sorted.c ft_SwapPush.c ft_units.c push_swap.c ft_free.c ft_SortScore.c

LIST2	= ft_BigSort.c ft_check.c ft_checkSorted.c ft_clean.c ft_init.c ft_MaxMinMed.c ft_Rotate.c ft_RRotate.c \
			ft_SearchScore.c ft_sorted.c ft_SwapPush.c ft_units.c ft_free.c ft_checker.c ft_SortScore.c ft_stack_null.c

OBJ1		= $(patsubst %.c,%.o,$(LIST1))

OBJ2		= $(patsubst %.c,%.o,$(LIST2))

CC = gcc

FLAGS = -Wall -Werror -Wextra

LIBFT_INCL = ./libft/

LIBFT_NAME = libft.a

HDR_P_S = push_swap.h

LIBFT = $(addprefix ${LIBFT_INCL}, ${LIBFT_NAME})

all: ${LIBFT} ${NAME} ${NAMECHECK}

${LIBFT}:
	${MAKE} -C ${LIBFT_INCL}

%.o : %.c $(HDR_P_S)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ1)
	${CC} ${FLAGS} -o ${NAME} ${OBJ1} -L ${LIBFT_INCL} -lft -o $@

$(NAMECHECK) : $(OBJ2)
	${CC} ${FLAGS} -o ${NAME} ${OBJ2} -L ${LIBFT_INCL} -lft -o $@

clean:
	rm -f ${OBJ1}
	rm -f ${OBJ2}
	${MAKE} clean -C ${LIBFT_INCL}

fclean: clean
	rm -f ${NAME}
	rm -f ${NAMECHECK}
	${MAKE} fclean -C ${LIBFT_INCL}

re: fclean all

.PHONNY : all clean fclean re
