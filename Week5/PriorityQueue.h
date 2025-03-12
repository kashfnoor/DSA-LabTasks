#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include "Queue.h"

template<class T>
class PQue {
    Queue<T>* pQ;
    int PLevels;
public:
    PQue();
    PQue(int PLevels);
    ~PQue();
    bool IsFull() const;
    bool IsEmpty() const;
    void Insert(T item, int p);
    void Remove(T& item);
};

template<class T>
PQue<T>::PQue() {
    PLevels = 10;
    pQ = new Queue<T>[PLevels];
}

template<class T>
PQue<T>::PQue(int PLevels) {
    this->PLevels = PLevels;
    pQ = new Queue<T>[PLevels];
}

template<class T>
PQue<T>::~PQue() {
    if (pQ) {
        delete[] pQ;
        pQ = nullptr;
    }
}

template<class T>
bool PQue<T>::IsFull() const {
    for (int i = 0; i < PLevels; i++) {
        if (!pQ[i].isFull()) {
            return false;
        }
    }
    return true;
}

template<class T>
bool PQue<T>::IsEmpty() const {
    for (int i = 0; i < PLevels; i++) {
        if (!pQ[i].isEmpty()) {
            return false;
        }
    }
    return true;
}

template<class T>
void PQue<T>::Insert(T item, int p) {
    if (p < 0 || p >= PLevels) {
        cerr << "Invalid priority level!" << endl;
        return;
    }
    pQ[p].insert(item);
}

template<class T>
void PQue<T>::Remove(T& item) {
    for (int i = 0; i < PLevels; i++) {
        if (!pQ[i].isEmpty()) {
            pQ[i].remove(item);
            return;
        }
    }
    cerr << "Priority Queue underflow!" << endl;
}

#endif
