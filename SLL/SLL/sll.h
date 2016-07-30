#ifndef sll_H
#define sll_H

#include "node.h"

class sll : public node {
public:
	sll();
	void insert(node* tempNode);
	void print();
private:
	node* head;
};

sll::sll() {
	head = NULL;
}

void sll::insert(node* tempNode) {
	node* curr = head;
	if (head == NULL) {
		head = tempNode;
	}

	else if (head->getNext() == NULL) {
		head->setNext(tempNode);
	}

	else {
		while (curr->getNext() != NULL) {
			curr = curr->getNext();
		}
		curr->setNext(tempNode);
			
	}
}

void sll::print() {
	node* curr = head;
	while (curr != NULL) {
		cout << curr->getData() << endl;
		curr = curr->getNext();
	}
}

#endif sll_H