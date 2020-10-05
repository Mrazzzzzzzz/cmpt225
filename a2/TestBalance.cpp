#include <iostream>
#include <cstdlib>
#include "dsexceptions.h"
#include "AvlTreeB.h"
#include <random>

using namespace std;

int main(){
    AvlTree<int> tree1;

    int array[5000];

    //  test insert 5000 random numbers
    for(int i = 0; i < 5000; i++)
    {
        int num = rand() % 5000;
        tree1.insert(num);
        array[i] = num;
    }
    cout << "insert 5000 items, " << tree1.balance_time << " balancing is needed to insert 5000 integers" << endl;
    
    tree1.balance_time = 0;

    // test remove all 5000 numbers
    for(int i = 0; i < 5000; i++)
    {
        tree1.remove(array[i]);
    }
    cout << "remove 5000 items, " << tree1.balance_time << " balancing is needed to insert 5000 integers" << endl;
    
    return 0;
}