OBJS = Add.o Minus.o Multi.o Divide.o Calculator.o

all: main
Add.o: Add.c
	gcc -c Add.c
Minus.o: Minus.c
	gcc -c Minus.c
Multi.o: Multi.c
	gcc -c Multi.c
Divide.o: Divide.c
	gcc -c Divide.c
Calculator.o: Calculator.c
	gcc -c Calculator.c

main: $(OBJS)
	gcc -o main $(OBJS)

clean:
	rm main $(OBJS)
