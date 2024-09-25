TARGET = rush-02

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = dict-utils.c main.c digits_functions.c parser.c help_functions.c print.c input_valid.c utils.c key_parser.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean:
	rm -f $(TARGET) $(OBJS)

all: $(TARGET)
