#include "impfile.h"
#include <string>
using namespace std;

int main() {
	Stack s;
	int item;

	cout << "Top Number" << endl; 

	for (int i = 0; i < 20; i++) {
		s.Push(i);
	}

	s.Pop(item);

	cout << "the top number is : " << s.Peek() << endl << endl;

	for (int i = 0; i < 19; i++) {
		int item;
		s.Pop(item);
		cout << item << " ";
	}

	cout << "\n\n-----------------------------" << endl;
	cout << "String Reversal" << endl; 
	cout << "-----------------------------" << endl;
	string original = "kashf";

	string reversed = ReverseString(original);

	cout << "\nOriginal string: " << original << endl;
	cout << "Reversed string: " << reversed << endl;

	cout << "-----------------------------" << endl;
	cout << "Parenthesis Evaluation" << endl; 
	cout << "-----------------------------" << endl;

	string equation = "((4+28)/(2*2))";
	cout << "\nexpression : " << equation;
	if (IsBalanced(equation)) {
		cout << "\nYour parenthesized expression is balanced!\n";
	}
	else
		cout << "\nThis parenthesized expression is not balanced\n";

	cout << "-----------------------------" << endl; 
	cout << "Infix to Postfix" << endl;
	cout << "-----------------------------" << endl;

	string Postfix = InfixToPostfix(equation);
	cout << "Postfix for the equation is : " << Postfix << endl;


	cout << "\nEvaluating this expression gives: " << Evaluate(Postfix) << endl;
	cout << "\n------------- THE END ----------------" << endl;
	return 0;
}