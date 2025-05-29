#include "LinkedList.h"
#include "LinkedStr.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int userChoice;

    cout << "1. Exercise 6.1: Test all functions of linkedList.h\n";
    cout << "2. Exercise 6.2: Reversing string using stack\n";
    cout << "3. Exercise 6.3: Using user input of struct node\n";
    cin >> userChoice;
    cin.ignore(); 

    if (userChoice == 1) {
        cout << "----------------------------\n";
        cout << "EXERCISE 6.1:\n";
        cout << "----------------------------\n";

        List<int> myList;
        myList.push(10);
        myList.push(20);
        myList.push(30);

        cout << "List elements are: 30 -> 20 -> 10\n";

        cout << "Inserting 25 after 20:\n";
        myList.insertAfter(20, 25);
        cout << "List is now: 30 -> 20 -> 25 -> 10\n";

        cout << "Deleting 20:\n";
        myList.deleteValue(20);
        cout << "List is now: 30 -> 25 -> 10\n";

        cout << "Final List after operations:\n";
        while (!myList.isEmpty()) {
            cout << myList.pop() << " ";
        }
        cout << endl;
    }

    else if (userChoice == 2) {
        cout << "----------------------------\n";
        cout << "EXERCISE 6.2:\n";
        cout << "----------------------------\n";

        List<char> charStack;
        string inputStr;

        cout << "Enter a string to reverse it: ";
        getline(cin, inputStr);

        cout << "Pushed characters: ";
        for (char ch : inputStr) {
            charStack.push(ch);
            cout << ch;
        }

        cout << "\nPopped and reversed characters: ";
        for (size_t i = 0; i < inputStr.length(); ++i) {
            cout << charStack.pop();
        }
        cout << endl;
    }

    else if (userChoice == 3) {
        cout << "----------------------------\n";
        cout << "EXERCISE 6.3:\n";
        cout << "----------------------------\n";

        LinkedStr<int> customList;
        int totalNodes;

        cout << "Enter number of nodes: ";
        cin >> totalNodes;

        cout << "=============================\n";
        customList.makeStr(totalNodes);
        cout << "=============================\n";
        customList.displayStr();
        cout << "=============================\n";

        int valueToRemove;
        cout << "Enter the value of node you want to delete: ";
        cin >> valueToRemove;

        customList.remove(valueToRemove);
        cout << "Displaying after removing node with value " << valueToRemove << ":\n";
        customList.displayStr();
        cout << "=============================\n";

        cout << "Displaying after deleting first node:\n";
        customList.removeFirst();
        customList.displayStr();
        cout << "=============================\n";

        cout << "Displaying after deleting last node:\n";
        customList.removeLast();
        customList.displayStr();
        cout << "=============================\n";
    }

    else {
        cout << "Invalid choice entered.\n";
        return 0;
    }

    return 0;
}