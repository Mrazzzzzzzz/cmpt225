#include "BinarySearchTree1.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	//cornor case (no root)
	BinarySearchTree <int> tree1;
	int count = tree1.count_leaves();
	cout << "count the leaves in the tree with no root: " << count << endl;

	// tree with one root
	tree1.insert(3);
	count = tree1.count_leaves();
	cout << "count the leaves in the tree with one root: " << count << endl;

	tree1.insert(5);
	count = tree1.count_leaves();
	cout << "count the leaves after insert 3 and 5 in the tree: " << count << endl;

	tree1.insert(2);
	count = tree1.count_leaves();
	cout << "count the leaves after insert 2 in the tree: " << count << endl;

	tree1.insert(1);
	tree1.insert(4);
	tree1.insert(7);
	tree1.insert(6);
	tree1.insert(8);
	tree1.insert(10);
	tree1.insert(9);
	count = tree1.count_leaves();
	cout << "count the leaves after insert 1,4,7,6,8,10,9 in the tree: " << count << endl;
	
	return 0;
}