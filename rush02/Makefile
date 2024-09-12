TARGET = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = main.c make_done.c paint.c read_map.c read_stdin_1.c read_stdin_2.c validate_map.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c prototypes.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

.PHONY: all clean
