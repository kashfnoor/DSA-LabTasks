#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
    int N;
    cout << "Enter the number of priority levels: ";
    cin >> N;

    PQue<const char*> pq(N);
    pq.Insert("K", 5);
    pq.Insert("Z", 2);
    pq.Insert("H", 0);
    pq.Insert("M", 3);
    pq.Insert("T", 0);
    pq.Insert("R", 4);

   

    const char* item = nullptr;
    cout << "\n\nThe PQ after priority insertions:\n";
    while (!pq.IsEmpty()) {
        pq.Remove(item);
        cout << item << endl;
    }

    return 0;
}
