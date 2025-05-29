#include<iostream>
#include<string>
#include "BinarySearchTree.h"
using namespace std;

int main() {

	cout << "    TASK 1\n";
	string names[] = { "     Kashf", "     Eshal", "     Zoya", "     Zaheer", "     Noor" };
	int size = sizeof(names) / sizeof(names[0]);

	SortStrings(names, size);

	cout << "Sorted Strings:\n";
	for (int i = 0; i < size; i++) {
		cout << names[i] << endl;
	}
	return 0;
}