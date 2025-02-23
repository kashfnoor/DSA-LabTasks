#include<iostream>
#include<conio.h>
using namespace std;
/*
 Example 3.1

int fact(int n) {
	if (n == 0) return 1;
	else
		return n * fact(n - 1);
}
int main()
{
	cout << fact(5) << endl;
	_getch();
	return 0;
} 

Example 3.2

void rev()
{
	char ch;
	cin.get(ch);
	if (ch != '\n')
	{
		rev();
		cout.put(ch);

	}
}
int main()
{
	rev();
	return 0;

}


Example 3.3 and Exercise 3.1

int Power(int X, int N)
{
	if (N == 0) return 1;
	else
		return Power(X, N - 1) * X;

}
int main()

{
	for (int N = 0; N <= 20; N++)
	{
		cout << "N =  " << N << "    Value = " << Power(2, N) << endl;

}
	
	return 0;
}

Example 3.4 and Exercise 3.2

int Ackermann(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return Ackermann(m - 1, 1);
	else if (m > 0 && n > 0)
		return Ackermann(m - 1, Ackermann(m, n - 1));

}
int main()
{
	cout << "Ackermann for (3,4): " << Ackermann(3, 4) << endl;
}
Excercise 3.3 

a) print for n to 0 recursive 
void PrintN(int n){
if (n < 0)
	return;
cout << n << endl;
	PrintN(n - 1);
}
int main() {
	int n;
	cout << "enter ur number  ";
	cin >> n;
		PrintN(n);
	cout << endl;
}

b) binomial coefficients 
int CBC(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	}
	return CBC(n - 1, k - 1) + CBC(n - 1, k);
}

int main() {
	int n, k;
	cout << "Enter the 1st value: ";
	cin >> n;
	cout << "Enter the 2nd value: ";
	cin >> k;

	if (k > n || n < 0 || k < 0) {
		cout << "Invalid input :(" << endl;
	}
	else {
		cout << "C(" << n << ", " << k << ") = " << CBC(n, k) << endl;
	}

	return 0;
} 
c) Prime number checking
#include <iostream>
using namespace std;

bool CheckPrime(int num, int divisor) {
	if (divisor == 1) {
		return true;
	}
	if (num % divisor == 0) {
		return false;
	}
	return CheckPrime(num, divisor - 1);
}

bool IsNumberPrime(int num) {
	if (num <= 1) {
		return false;
	}
	return CheckPrime(num, num - 1);
}

int main() {
	int number;
	cout << "Enter a value to see if its a prime number! ";
	cin >> number;

	if (IsNumberPrime(number)) {
		cout << number << " : it is a prime number!" << endl;
	}
	else {
		cout << number << " : it is not a prime number!" << endl;

	}

	return 0;
}
*/

