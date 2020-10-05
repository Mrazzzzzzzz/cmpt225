#include "List.h"
#include "Vector.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

double elapsed_time( clock_t start, clock_t finish);

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {

  // Vector<int> num1;
  Vector<float> num1;
  int loopnum = 10000000;
  float num = 2.71828182845904523;

  clock_t start1, finish1;// used for getting the time.
  start1 = clock();
  for(int i = 0; i<= loopnum; i++){
		// num1.push_back(i);
    num1.push_back(num);
	}
  finish1 = clock();
  double time_taken1 = elapsed_time(start1,finish1);

  clock_t start2, finish2;// used for getting the time.
  start2 = clock();
  num1.visitAll();
  finish2 = clock();
  double time_taken2 = elapsed_time(start2,finish2);

  // List<int> list1;
  List<float> list1;

  clock_t start3, finish3;// used for getting the time.
  start3 = clock();
    for(int i = 0; i <= loopnum; i++){
      // list1.push_back(i);
      list1.push_back(num);
    }
  finish3 = clock();
  double time_taken3 = elapsed_time(start3,finish3);

  clock_t start4, finish4;// used for getting the time.
  start4 = clock();
  list1.visitAll();
  finish4 = clock();
  double time_taken4 = elapsed_time(start4,finish4);

  cout << "[mrazc]" << endl;
  cout << "Program: [part1]" << endl;
  cout << "Type of Elements: [float]" << endl;
  cout << "Number of Elements: [" << loopnum << "]" << endl;
  cout << "Time units: [milliseconds]" << endl;
  cout << "Time for Vector Insertion: [" << time_taken1 << "]" << endl;
  cout << "Time for List Insertion: [" << time_taken3 << "]" << endl;
  cout << "Time for Vector Visiting: [" << time_taken2 << "]" << endl;
  cout << "Time for List Visiting: [" << time_taken4 << "]" << endl;

  return 0;
}