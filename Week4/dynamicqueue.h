#ifndef DYNAMIC_H
#define DYNAMIC_H

#include<iostream>
using namespace std;

template<class K>
class Queue {
    int front, rear, count;
    K* queue;
    int MAX;
public:
    Queue();
    Queue(int);
    ~Queue();
    bool isFull() const;
    bool isEmpty() const;
    void insert(K item);
    void remove(K& item);
};
template<class K>
Queue<K>::Queue() {
    MAX = 500;
    count = 0;
    front = -1;
    rear = -1;
    queue = new K[MAX];
}
template<class K>
Queue<K>::~Queue() {
    delete[] queue;
}
template<class K>
Queue<K>::Queue(int max) {
    MAX = max;
    count = 0;
    front = -1;
    rear = -1;
    queue = new K[MAX];
}
template<class K>
bool Queue<K>::isFull() const {
    return (count == MAX);
}
template<class K>
bool Queue<K>::isEmpty() const {
    return (count == 0);
}
template<class K>
void Queue<K>::insert(K item) {
    if (isFull()) {
        cerr << "Queue is in overflow"; exit(1);
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = item;
    count++;
}
template<class K>
void Queue<K>::remove(K& item) {
    if (isEmpty()) {
        cerr << "Queue is in underflow"; exit(1);
    }
    item = queue[front];
    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
    count--;
}
#endif
