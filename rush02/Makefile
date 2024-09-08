NAME = rush-02

OBJS = ${*.c.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} *.c -Iincludes -Wall -Werror -Wextra
clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
