NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putstr.c\
		ft_putnbr.c\
		ft_putchar.c\
		ft_puthexa.c\
		ft_printf.c\
		ft_putnbrun.c\

OBJ = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean