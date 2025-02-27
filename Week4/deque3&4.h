//#ifndef DEQUE_H
//#define DEQUE_H
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class K>
//class Deque {
//    int MAX, front, rear, count;
//    K* deque;
//public:
//    Deque();
//    Deque(int);
//    ~Deque();
//    bool isFull() const;
//    bool isEmpty() const;
//    void insertFront(K item);
//    void insertRear(K item);
//    void removeFront(K& item);
//    void removeRear(K& item);
//};
//template<class K>
//Deque<K>::Deque() {
//    MAX = 100;
//    front = rear = -1;
//    count = 0;
//    deque = new K[MAX];
//}
//template<class K>
//Deque<K>::Deque(int max) {
//    MAX = max;
//    front = rear = -1;
//    count = 0;
//    deque = new K[MAX];
//}
//template<class K>
//Deque<K>::~Deque() {
//    delete[] deque;
//}
//template<class K>
//bool Deque<K>::isFull() const {
//    return count == MAX;
//}
//template<class K>
//bool Deque<K>::isEmpty() const {
//    return count == 0;
//}
//template<class K>
//void Deque<K>::insertFront(K item) {
//    if (isFull()) {
//        cerr << "Queue overflow.";
//        exit(1);
//    }
//    if (front == -1) {
//        front = rear = 0;
//    }
//    else if (front == 0) {
//        front = MAX - 1;
//    }
//    else {
//        front = front - 1;
//    }
//    deque[front] = item;
//    count++;
//}
//template<class K>
//void Deque<K>::insertRear(K item) {
//    if (isFull()) {
//        cerr << "Queue overflow.";
//        exit(1);
//    }
//    if (rear == -1) {
//        rear = front = 0;
//    }
//    else if (rear == MAX - 1) {
//        rear = 0;
//    }
//    else {
//        rear = rear + 1;
//    }
//    deque[rear] = item;
//    count++;
//}
//template<class K>
//void Deque<K>::removeFront(K& item) {
//    if (isEmpty()) {
//        cerr << "Queue underflow.";
//        exit(1);
//    }
//    item = deque[front];
//    count--;
//    if (front == rear) {
//        front = rear = -1;
//    }
//    else if (front == MAX - 1) {
//        front = 0;
//    }
//    else {
//        front = front + 1;
//    }
//}
//template<class K>
//void Deque<K>::removeRear(K& item) {
//    if (isEmpty()) {
//        cerr << "Queue underflow.";
//        exit(1);
//    }
//    item = deque[rear];
//    count--;
//    if (front == rear) {
//        front = rear = -1;
//    }
//    else if (rear == 0) {
//        rear = MAX - 1;
//    }
//    else {
//        rear = rear - 1;
//    }
//}
//
//#endif