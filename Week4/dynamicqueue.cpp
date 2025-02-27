#include "dynamicqueue.h"
int main() {
    Queue<int> numbers(10);
    cout << "Entering ";
    for (int i = 0; i < 10; i++) {
        numbers.insert(i);
        cout << i << " ";
    }
    int num;
    cout << "\nRemoval ";
    for (int i = 0; i < 10; i++) {
        numbers.remove(num);
        cout << num << " ";
    }
    Queue<string> names(8);
    cout << "\n\nNames of Friends : \n";
    names.insert(" Khadija");
    names.insert("Habibti");
    names.insert("Hamza");
    names.insert("Zainy");
    names.insert("Rohan");
    names.insert("Mary");
    names.insert("Sabo");
    names.insert("Fatima");
    string friends;
    for (int i = 0; i < 8; i++) {
        names.remove(friends);
        cout << friends << "\n ";
    }
    cout << "\n\n";
}