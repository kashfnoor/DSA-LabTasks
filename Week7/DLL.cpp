#include <iostream>
using namespace std;

template<class T>
class DoublyLL {
	struct Node {
		T data;
		Node* prev;
		Node* next;
	};
	typedef Node* NodePtr;
	NodePtr head;

public:
	DoublyLL();
	~DoublyLL();
	void display();
	void insertStart(T value);
	void deleteStart();
	void insertEnd(T value);
	void deleteEnd();
	void insertBetween(T existingValue, T newValue);
};

template<class T>
DoublyLL<T>::DoublyLL() {
	head = nullptr;
}

template<class T>
DoublyLL<T>::~DoublyLL() {
	NodePtr current = head;
	while (current != nullptr) {
		NodePtr temp = current;
		current = current->next;
		delete temp;
	}
	head = nullptr;
}

template<class T>
void DoublyLL<T>::insertStart(T value) {
	NodePtr newNode = new Node;
	newNode->data = value;
	newNode->prev = nullptr;
	newNode->next = head;

	if (head != nullptr) { // if there is another node in the list
		head->prev = newNode;
	}
	head = newNode;
}

template<class T>
void DoublyLL<T>::display() {
	if (head == nullptr) {
		cout << "The list is empty.\n";
		return;
	}
	NodePtr current = head;
	int index = 1;
	while (current != nullptr) {
		cout << "NODE " << index << ": " << current->data << endl;
		current = current->next;
		index++;
	}
}

template<class T>
void DoublyLL<T>::deleteStart() {
	if (head == nullptr) {
		cout << "The list is empty!" << endl;
		return;
	}
	NodePtr toDelete = head;
	head = head->next;
	if (head != nullptr) {
		head->prev = nullptr;
	}
	delete toDelete;
}

template<class T>
void DoublyLL<T>::insertEnd(T value) {
	NodePtr newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr) {
		newNode->prev = nullptr;
		head = newNode;
		return;
	}

	NodePtr current = head;
	while (current->next != nullptr) {
		current = current->next;
	}

	newNode->prev = current;
	current->next = newNode;
}

template<class T>
void DoublyLL<T>::deleteEnd() {
	if (head == nullptr) {
		cout << "The list is empty!" << endl;
		return;
	}
	if (head->next == nullptr) {
		delete head;
		head = nullptr;
		return;
	}
	NodePtr current = head;
	while (current->next->next != nullptr) {
		current = current->next;
	}
	NodePtr toDelete = current->next;
	current->next = nullptr;
	delete toDelete;
}

template<class T>
void DoublyLL<T>::insertBetween(T existingValue, T newValue) {
	if (head == nullptr) {
		cout << "The list is empty, inserting your node with new value!" << endl;
		NodePtr newNode = new Node;
		newNode->data = newValue;
		newNode->prev = nullptr;
		newNode->next = nullptr;
		head = newNode;
		return;
	}

	if (head->next == nullptr && head->data == existingValue) {
		NodePtr newNode = new Node;
		newNode->data = newValue;
		newNode->next = nullptr;
		newNode->prev = head;
		head->next = newNode;
		return;
	}

	NodePtr current = head;
	while (current != nullptr && current->data != existingValue) {
		current = current->next;
	}

	if (current == nullptr) {
		cout << "Value looked for is not in the list!" << endl;
		return;
	}

	NodePtr newNode = new Node;
	newNode->data = newValue;
	newNode->next = current->next;
	newNode->prev = current;

	if (current->next != nullptr) {
		current->next->prev = newNode;
	}
	current->next = newNode;
}

int main() {
	DoublyLL<int> list;

	// Inserting elements at the start
	list.insertStart(10);
	list.insertStart(20);
	list.insertStart(30);

	cout << "Initial List: \n";
	list.display();

	// Deleting first node
	list.deleteStart();
	cout << "\nDisplaying after deleting first node: \n";
	list.display();

	// Inserting at the end
	list.insertEnd(40);
	cout << "\nDisplaying after adding another node at the end: \n";
	list.display();

	// Insert between
	list.insertBetween(10, 25);
	cout << "\nDisplaying after inserting 25 after 10: \n";
	list.display();

	// Insert when value is not found
	list.insertBetween(99, 50);
	cout << "\nDisplaying after trying to insert 50 after 99 (at the end): \n";
	list.display();

	// Delete last node
	list.deleteEnd();
	cout << "\nDisplaying after deleting last node: \n";
	list.display();

	return 0;
}