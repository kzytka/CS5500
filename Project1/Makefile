# Makefile for list.c and list_test.c

CC = gcc
CFLAGS = -Wall -I.
TARGET = list_test
SRCS = list.c list_test.c
OBJS = $(SRCS:.c=.o)
DEPS = list.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
