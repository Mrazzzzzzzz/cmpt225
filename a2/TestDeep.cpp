#include "BinarySearchTree2.h"
#include <iostream>

using namespace std;

int main(){
    BinarySearchTree <int> tree1;

    tree1.insert(3);
    tree1.insert(10);
    int count = tree1.countDeep(0);
    cout << "number of leaves > depth k after insert 3, 10 is: " << count << endl;

    tree1.insert(5);
    tree1.insert(6);
    count = tree1.countDeep(1);
    cout << "number of leaves > depth k after insert 5, 6 is: " << count << endl;

    tree1.insert(8);
    tree1.insert(9);
    count = tree1.countDeep(2);
    cout << "number of leaves > depth k after insert 8, 9 is: " << count << endl;

	return 0;
}