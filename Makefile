CC = gcc
CFLAGS = -Wall -Wextra
SANFLAGS = -fsanitize=address,undefined

TARGET = programa
SRCS = src/main.c src/util.c
HEADERS = util.h 
#LDLIBS = librerias externas
OBJS = $(SRCS:.c=.o)

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(SANFLAGS) $^ -o $@ #$(LDLIBS)


%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(SANFLAGS) -c $< -o $@


debug: CFLAGS += -g -O0
debug: clean all


clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean debug
