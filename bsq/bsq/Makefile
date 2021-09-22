SRC		=	diagorythm/solve_map.c \
			diagorythm/ft_compute.c \
			file/ft_read.c \
			function/ft_is_something/ft_are_empty_lines_in_str.c \
			function/ft_is_something/ft_is_in_charset.c \
			function/ft_is_something/ft_is_number.c \
			function/ft_is_something/ft_is_printable.c \
			function/ft_split/ft_split.c \
			function/ft_strlen/ft_strlen.c \
			function/ft_map_int_to_char/ft_map_int_to_char.c \
			parsing/clean/ft_clean_map.c \
			parsing/clean/ft_clean_tab.c \
			parsing/mapping/ft_map_char_to_int.c \
			parsing/validation/ft_validate_map.c \
			main.c

NAME = bsq.out

OBJS = ${SRC:.c=.o}

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
		gcc ${CFLAGS} -o ${NAME} ${OBJS}

all:    ${NAME}

clean:æ
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:     fclean all