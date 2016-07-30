#ifndef node_H
#define node_H

#include <iostream>
using namespace std;

class node {
public:
	node() {
		data = 0;
		next = NULL;
	}

	void setData(int num) {
		data = num;
	}

	void setNext(node* ptr) {
		next = ptr;
	}

	int getData() {
		return data;
	}

	node* getNext() {
		return next;
	}
private:
	int data;
	node* next;
};

#endif