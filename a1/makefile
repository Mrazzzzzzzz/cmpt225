all: part1 part2

part1: part1.o
	g++ part1.o	-o part1

part1.o: part1.cpp
	g++ -c part1.cpp

part2: part2.o
	g++ part2.o	-o part2

part2.o: part2.cpp
	g++ -c part2.cpp

clean:
# 	rm *.o part1 part2
	rm -f part1 part2 *.o