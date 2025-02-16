#pragma once

#include <iostream>
using namespace std;

#define MAX_ITEMS 100
typedef int itemType;

class Stack {
private:
	int top;
	itemType items[MAX_ITEMS];

public:
	Stack();
	int isthisempty() const;
	int isitfull() const;
	void Push(itemType newItem);
	void Pop(itemType& item);
	int Peek();

};
