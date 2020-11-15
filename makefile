CC = gcc
all: mains maind

libmyMath.a: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o
mains: main.o libmyMath.a
	$(CC) -Wall -g -o mains main.o libmyMath.a
mymathd: libmyMath.so
mymaths: libmyMath.a
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

maind: main.o libmyMath.so
	$(CC) -Wall -g -o maind main.o ./libmyMath.so

basicMath.o: basicMath.c myMath.h
	$(CC) -Wall -fPIC -c -o basicMath.o basicMath.c

power.o: power.c myMath.h
	$(CC) -Wall -fPIC -c -o power.o power.c

main.o: main.c myMath.h
	$(CC) -Wall -c -o main.o main.c

.PHONY: clean all mymathd mymaths
clean:
	rm -f *.o *.a *.so mains maind
