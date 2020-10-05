all: TestLeaves TestDeep TestBalance

TestLeaves: TestLeaves.o
	g++ TestLeaves.o	-o TestLeaves

TestLeaves.o: TestLeaves.cpp
	g++ -c TestLeaves.cpp

TestDeep: TestDeep.o
	g++ TestDeep.o	-o TestDeep

TestDeep.o: TestDeep.cpp
	g++ -c TestDeep.cpp

TestBalance: TestBalance.o
	g++ TestBalance.o	-o TestBalance

TestBalance.o: TestBalance.cpp
	g++ -c TestBalance.cpp

clean:
	rm -f TestLeaves TestDeep TestBalance *.o