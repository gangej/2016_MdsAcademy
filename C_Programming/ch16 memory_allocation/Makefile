.SUFFIXES : .c .o
CC = gcc
CFLAGS = -g -Wall -ansi
 all: test

#OBJS = ch16__donation_hw.o 
OBJS = ch16__prime_hw.o
SRCS = $(OBJS:.o=.c)

test: $(OBJS)
	$(CC) -o ch16_1 $(OBJS) 

clean: 
	rm -rf $(OBJS)
	rm -rf *.exe
distclean: 
	rm -rf $(OBJS) ch16_1 test
	rm -rf $(OBJS) ch16_2 test

test1 : $(OBJS)
	$(CC) -o ch16_2 $(OBJS)