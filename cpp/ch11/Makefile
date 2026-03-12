#makefile

CC = g++

CFLAGS = -Wall O2 -g

SRCS = $(wildcard *.cpp)

TARGET = $(SRCS:.cpp=)

all:4(TARGETS)

%: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)