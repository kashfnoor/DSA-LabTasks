
// Exercise 1.1
#include <math.h>
class Complex {
private:
	float re, im;
public:
	Complex(float r, float i) { re = r; im = i; }
	Complex(float r)
	{
		re = r; im = 0.0;
	}
	~Complex() {};
	double Magnitude() {
		return sqrt(re * re + Imag() * Imag());
	}
	float Real()
	{
		return re;
	}
	float Imag()
	{
		return im;
	}
	Complex operator+(Complex b)
	{
		return Complex(re + b.re, im + b.im);
	}
	Complex operator=(Complex b)
	{
		re = b.re;im = b.im; return *this;
	}
	Complex operator*(const Complex& other) {
		return Complex(re * other.re, im * other.im);
	}
};
int main() {
	Complex a(1.0, 1.0);
	Complex* b = new Complex(5.0, 3.0);
	Complex c(0, 0);
	cout << "a real = " << a.Real() << ", a imaginary = " << a.Imag() << endl;
	cout << "b real = " << b->Real() << ", b imaginary = " << b->Imag() << endl;
	c = a + (*b);
	cout << "c real = " << c.Real() << ", c imaginary = " << c.Imag() << endl;
	Complex d(0, 0);
	d = a * (*b);
	cout << "d real = " << d.Real() << ", d imaginary = " << d.Imag() << endl;
	delete b;

	return 0;
}


// Example 1.1
int max1(int X, int Y) {
	return (X > Y) ? X : Y;
}
void max2(int X, int Y, int& Larger) {
	Larger = (X > Y) ? X : Y;
}
void max3{ int X, int Y, int* Larger)
{ *Larger = (X > Y) ? X : Y; }



// Example 1.3

T GetMax(T a, T b)
{
	T result;
	result = (a > b) ? a : b;
	return (result);
}
int main() {
	int i = 5, j = 6, k;
	long L = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMax<long>(L, m);
	cout << k << endl;
	cout << n << endl;

	// Example 1.4
	template<class T>
	class mypair
	{
		T a, b;
	public:
		mypair(T first, T second)
		{
			a = first; b = second
		}
		T getmax();
	};
	template <class T>
	T mypair<T>::getmax()
	{
		T retval;
		retval = a > b ? a : b;
		return retval;
	}
	int main()
	{
		mypair <int> myobject(100, 75);
		cout << myobject.getmax();
		return 0;
	}

// Example 1.4 with Exercise 1.2
	template <class T>
class mypair
{
	T a, b;
public:
	mypair(T first, T second)
	{
		a = first;
		b = second;
	}
	T GetMin();
	T GetMax();
	};
	template <class T>
	T mypair <T> ::GetMax() {
		T returnVal;
		returnVal = a > b ? a : b;
		return returnVal;
	}
	template <class T>
	T mypair <T> ::GetMin() {
		T returnVal;
		returnVal = a < b ? a : b;
		return returnVal;
	}
int main()
{
	mypair <int> myobject(100, 75);
	cout << myobject.GetMax() << endl;
	cout << myobject.GetMin();
	return 0;
}

// Example 1.5 and Exercise 1.3

template <class T, int N>
class MySequence
{
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
	T GetMax();
	T GetMin();
};

/*@brief : sets value to a particular index
@prams : X defines the index at which we have to save the value
Value is the value that needs to be set to the index*/

template <class T, int N>
void MySequence <T, N> ::setmember(int x, T value)
{
	memblock[x] = value;
}
template <class T, int N> T MySequence<T, N>::getmember(int x)
{
	return memblock[x];
}
template <class T, int N> T MySequence<T, N>::GetMax()
{
	T max = memblock[0];
	for (int i = 0; i < N; i++)
	{
		if (max < memblock[i])
		{
			max = memblock[i];
		}
	} return max;
}
template <class T, int N> T MySequence<T, N>::GetMin()
{
	T min = memblock[0];
	for (int i = 0; i < N; i++)
	{
		if (min > memblock[i])
		{
			min = memblock[i];
		}
	} return min;
}
int main()
{
	MySequence <int, 5> myints;
	MySequence <double, 5> mydoubles;
	myints.setmember(0, 100);
	myints.setmember(1, 222);
	myints.setmember(2, 333);
	mydoubles.setmember(3, 13.52);
	cout << myints.getmember(0) << endl;
	cout << mydoubles.getmember(3) << endl;
	cout << myints.GetMax() << endl;
	cout << myints.GetMin();
	return 0;
}



// Example 1.6 and Exercise 1.4
#include<iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ofstream outFile;
	outFile.open("fout.txt");
	ifstream inFile("fin.txt");
	char ch;
	int countch = 0;
	int countwrds = 0;
	int countsent = 0;


	while (inFile.get(ch))
	{
		outFile << ch;
		countch++;

		if (ch == ' ')
		{
			countwrds++;

		}
		else if (
			ch == '.' || ch == '?')
		{
			countsent++;

		}
	};

	outFile << "\nCharacter Count = " << countch << endl;
	outFile << "Word Count = " << countwrds++ << endl;
	outFile << "Sentence Count = " << countsent << endl;

	inFile.close();
	outFile.close();
	cout << countch << " <--- this is ur character count " << endl;
	cout << countwrds << " <--- this is ur word count " << endl;
	cout << countsent << " <--- this is ur sentence count " << endl;
	return 0;
}

—

// Exercise 1.5
#include <iostream>
#include <cstring>
#include <conio.h>
#include <fstream>
#include <iomanip>


using namespace std;
class House {
public:
	char owner[28];
	char address[28];
	int Bedrooms;
	float price;

	void readData() {

		cout << "Enter Owner: ";
		cin.getline(owner, 20);
		cout << "Enter Address: ";
		cin.getline(address, 20);
		cout << "The Number of Bedrooms?: ";
		cin >> Bedrooms;
		cout << "Price: ";
		cin >> price;
	}

	void displayData() {
		cout << left << setw(15) << owner << setw(25) << address << setw(15) << Bedrooms << setw(15) << price << "\n";
	}
};

int main() {
	House available[100];
	int count = 0;
	char choice;

	do {

		cout << "\nEntering data for house " << count + 1 << "\n";
		if (count > 0) cin.ignore();
		available[count].readData();
		count++;
		cout << "\nDo you want to enter in another house? (Y/N): ";
		cin >> choice;
	} while ((choice == 'Y' || choice == 'y') && count < 100);

	system("cls");
	cout << "\n" << left << setw(15) << "Owner" << setw(25) << "Address" << setw(15) << "Bedrooms" << setw(15) << "Price" << "\n";
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	for (int i = 0; i < count; i++) {
		available[i].displayData();
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	return 0;
}


// Example 1.6

#include<iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ofstream outFile;
	outFile.open("fout.txt");
	ifstream inFile("fin.txt");
	char ch;
	int count = 0;
	while (inFile.get(ch))
	{
		outFile << ch;
		count++;
	}
	outFile << "\n\n Character Count = " << count << endl;
	inFile.close();
	outFile.close();
	return 0;
}

// Excercise 1.6 
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Student {
	string firstname, lastname;
	int grades[10];
public:
	void readdata(ifstream& file, int numgrades) {
		file >> firstname >> lastname;
		for (int i = 0; i < numgrades; i++) {
			file >> grades[i];
		}
	}
	float ComputeAverage(int numgrades) {
				int sum = 0;
	for (int i = 0; i < numgrades; i++) {
			sum += grades[i];
		}
		float average = float(sum) / numgrades;
		return average;
	}
	void displaydata(int numgrades) {
		cout << left << setw(15) << firstname << setw(15) << lastname << setw(15) << ComputeAverage(numgrades) << endl;
	}
	float getaverage(int numgrades) {
		return ComputeAverage(numgrades);
	}

};
int main() {
	string filename;
	Student student[10];
	int numstudents, numgrades;
	string fname, lname;

	cout << "Enter your filename (with extension) \n";
	cin >> filename;
	cout << endl;
	ifstream file(filename);
	if (!file) {
		cout << "File does not exist";
		exit(1);
	}
	file >> numstudents >> numgrades;

	for (int i = 0; i < numstudents; i++) {
		student[i].readdata(file, numgrades);
	}
	cout << left << setw(13) << "First Name" << setw(13) << "Last Name" << setw(13) << "Average" << endl;
	for (int i = 0; i < numstudents; i++) {
		student[i].displaydata(numgrades);
	}
	float highestaverage = student[0].getaverage(numgrades);
	float lowestaverage = student[0].getaverage(numgrades);
	float totalavg = 0;

	for (int i = 0; i < numstudents; i++) {
		if (student[i].getaverage(numgrades) > highestaverage) {
			highestaverage = student[i].getaverage(numgrades);
		}
		if (student[i].getaverage(numgrades) < lowestaverage) {
			lowestaverage = student[i].getaverage(numgrades);
		}
		totalavg += student[i].getaverage(numgrades);
	}

	float classavg = totalavg / numstudents;
	cout << "\n Class Average is : " << classavg << endl;
	cout << "\n Lowest AVG Grade in the class is : " << lowestaverage << endl;
	cout << "\n Highest AVG Grade in class is : " << highestaverage << endl;

	cout << "\nThe following are the students with AVG less than class average: \n\n";
	cout << left << setw(13) << "First Name" << setw(13) << "Last Name" << setw(13) << "Average" << endl;
	for (int i = 0; i < numstudents; i++) {
		if (student[i].getaverage(numgrades) < classavg) {
			student[i].displaydata(numgrades);
		}
	}
	return 0;
	}


