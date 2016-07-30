#include <iostream>
#include "sll.h"

using namespace std;



int main() {
	sll list;

	node* newNode1 = new node;
	newNode1->setData(1);
	list.insert(newNode1);

	node* newNode2 = new node;
	newNode2->setData(2);
	list.insert(newNode2);

	node* newNode3 = new node;
	newNode3->setData(3);
	list.insert(newNode3);

	node* newNode4 = new node;
	newNode4->setData(4);
	list.insert(newNode4);

	node* newNode5 = new node;
	newNode5->setData(5);
	list.insert(newNode5);

	node* newNode6 = new node;
	newNode6->setData(6);
	list.insert(newNode6);

	node* newNode7 = new node;
	newNode7->setData(7);
	list.insert(newNode7);

	list.print();

	cout << "Hello" << endl;
	system("pause");
	return 0;
}