#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template<class T>
class List {
protected:
    struct Node {
        T data;
        Node* next;
    };

    using NodePtr = Node*;
    NodePtr head;

public:
    List();
    ~List();
    bool isEmpty();
    void insertAfter(T targetValue, T newValue);
    void deleteValue(T targetValue);
    void push(T newValue);
    T pop();
};

template<class T>
List<T>::List() {
    head = nullptr;
}

template<class T>
List<T>::~List() {
    if (isEmpty()) {
        return;
    }

    NodePtr currentNode = head;
    NodePtr nextNode = currentNode->next;

    while (currentNode != nullptr) {
        delete currentNode;
        currentNode = nextNode;
        if (nextNode != nullptr)
            nextNode = nextNode->next;
    }
}

template<class T>
bool List<T>::isEmpty() {
    return (head == nullptr);
}

template<class T>
void List<T>::insertAfter(T targetValue, T newValue) {
    NodePtr currentNode = head;

    while (currentNode != nullptr && currentNode->data != targetValue) {
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) {
        std::cout << "Value sought not found in the list.";
        exit(1);
    }

    NodePtr newNode = new Node;
    newNode->data = newValue;
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

template<class T>
void List<T>::deleteValue(T targetValue) {
    NodePtr currentNode = head;
    NodePtr previousNode = nullptr;

    while (currentNode != nullptr && currentNode->data != targetValue) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) {
        std::cout << "Value sought is not in the list.";
        exit(1);
    }

    if (previousNode == nullptr) {
        head = currentNode->next;
    }
    else {
        previousNode->next = currentNode->next;
    }

    delete currentNode;
}

template<class T>
void List<T>::push(T newValue) {
    NodePtr newNode = new Node;
    newNode->data = newValue;
    newNode->next = head;
    head = newNode;
}

template<class T>
T List<T>::pop() {
    if (isEmpty()) {
        std::cout << "Error: The list is empty.";
        exit(1);
    }

    NodePtr nodeToDelete = head;
    T valueToReturn = nodeToDelete->data;
    head = nodeToDelete->next;
    delete nodeToDelete;

    return valueToReturn;
}

#endif