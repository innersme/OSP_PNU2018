CC= gcc
CFLAGS= -Wall -g -c
INCLUDE= -I.
LIBS= -L. -lm

OBJS= Add.o Minus.o Multi.o Divide.o Calculator.o

all: main
%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<

main: $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)

clean:
	rm -f main $(OBJS)
