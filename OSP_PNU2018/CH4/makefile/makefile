CC= gcc
CFLAGS= -Wall -g -c
INCLUDE= -I.
LIBS= -L. -lm

OBJS= sum.o main.o
all: main
%.o: %.c
	$(CC) $(INCLUDE) ${CFLAGS} $<

main: $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)

clean:
	rm main $(OBJS)
