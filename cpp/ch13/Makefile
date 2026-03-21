#makefile

CC = g++

CFLAGS =  -Wall -O2 -g

SRCS = $(wildcard *.cpp)

TARGET = $(SRCS:.cpp=)

all: $(TARGET)

%: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)