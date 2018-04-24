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

main: Add.o Minus.o Multi.o Divide.o Calculator.o
	gcc -o main Add.o Minus.o Multi.o Divide.o Calculator.o

clean:
	rm main Add.o Minus.o Multi.o Divide.o Calculator.o
