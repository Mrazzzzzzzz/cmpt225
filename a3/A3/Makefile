all: test1 test2
# all: test1

test1: test1.o
	g++ -o test1 test1.o

test1.o: test1.cpp experiment1.h
	g++ -c test1.cpp

test2: test2.o
	g++ -o test2 test2.o

test2.o: test2.cpp experiment2.h
	g++ -c test2.cpp

clean:
	rm -f test1 test2 *.o
# 	rm -f test1 *.o