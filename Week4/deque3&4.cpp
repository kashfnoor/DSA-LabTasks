
#include "deque3&4.h"

int main() {
    string str;
    cout << "Enter your string to find out whether its a palindrome or not \n";
    getline(cin, str);
    Deque<char> character(str.length());

    for (char ch : str) {
        character.insertRear(ch);
    }
    char removedFront, removedRear;

    for (int i = 0; i < str.length() / 2; i++) {

        character.removeFront(removedFront);
        character.removeRear(removedRear);

        if (removedFront != removedRear) {
            cout << "Your string is not a palindrome :(";
            return 0;
        }
    }
    cout << "Your string is a palindrome :)";
}
