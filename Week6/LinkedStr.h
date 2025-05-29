#ifndef LINKED_STR_H
#define LINKED_STR_H

#include <iostream>

template<class T>
class LinkedStr {
protected:
    struct Node {
        T data;
        Node* next;
    };

    using NodePtr = Node*;
    NodePtr head;

public:
    LinkedStr();
    ~LinkedStr();
    void makeStr(int numberOfNodes);
    void displayStr();
    void remove(T targetValue);
    void removeFirst();
    void removeLast();
};

template<class T>
LinkedStr<T>::LinkedStr() {
    head = nullptr;
}

template<class T>
LinkedStr<T>::~LinkedStr() {
    NodePtr currentNode = head;
    while (currentNode != nullptr) {
        NodePtr tempNode = currentNode;
        currentNode = currentNode->next;
        delete tempNode;
    }
    head = nullptr;
}

template<class T>
void LinkedStr<T>::makeStr(int numberOfNodes) {
    NodePtr newNode, lastNode = nullptr;
    for (int i = 0; i < numberOfNodes; ++i) {
        newNode = new Node;
        std::cout << "Enter value for node " << i + 1 << ": ";
        std::cin >> newNode->data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        }
        else {
            lastNode->next = newNode;
        }
        lastNode = newNode;
    }
}

template<class T>
void LinkedStr<T>::displayStr() {
    NodePtr currentNode = head;
    while (currentNode != nullptr) {
        std::cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }
    std::cout << "NULL\n";
}

template<class T>
void LinkedStr<T>::remove(T targetValue) {
    NodePtr currentNode = head;
    NodePtr previousNode = nullptr;

    while (currentNode != nullptr && currentNode->data != targetValue) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) {
        std::cout << "Value not found in the list.\n";
        return;
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
void LinkedStr<T>::removeFirst() {
    if (head == nullptr) return;

    NodePtr tempNode = head;
    head = head->next;
    delete tempNode;
}

template<class T>
void LinkedStr<T>::removeLast() {
    if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    NodePtr currentNode = head;
    while (currentNode->next->next != nullptr) {
        currentNode = currentNode->next;
    }

    delete currentNode->next;
    currentNode->next = nullptr;
}
#endif