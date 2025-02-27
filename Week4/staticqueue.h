//4.1 static version
#ifndef STATIC_H
#define STATIC_H
#include<iostream>
using namespace std;
#define MAX 10

template<
 
 >
class Queue {
    int front, rear, count;
    K queue[MAX];
public:
    Queue();
    ~Queue() {}
    bool isFull() const;
    bool isEmpty() const;
    void insert(K item);
    void remove(K& item);
};
template<class K>
Queue<K>::Queue() 
{
    front = -1;
    rear = -1;
    count = 0;
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
        cerr << "Queue overflow!";
        exit(1);
    }
    else if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = item;
    count++;
}
template<class K>
void Queue<K>::remove(K& item) {
    if (isEmpty()) {
        cerr << "Queue underflow!"; 
        exit(1);
    }
    item = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
    count--;
}
#endif
