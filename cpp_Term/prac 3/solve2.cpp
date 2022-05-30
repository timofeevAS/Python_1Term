#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

double calculator(double a, double b, char oper) {
	switch (oper) {
	case('+'):
		return a + b;
	case('-'):
		return a - b;
	case('*'):
		return a * b;
	case('/'):
		double result;
		try {
			if (b == 0) {
				throw runtime_error("divide by Zero");
			}
			else {
				result = a / b;
			}
			return result;
		}
		catch (runtime_error& ex) {
			cout << "Exception occurred: " << endl << ex.what();
			return -1;
		}
	default:
		cout << "Operation didn't find";
		return -1;
	}
}


int main() {
	double a, b;
	char operation;
	cin.exceptions(cin.failbit);
	try {
		cout << "enter a";
		cin >> a;
	}
	catch (const exception& ex)
	{
		cout << "Error: Incorrect digit!" << endl;
		cin.clear();
		cin.ignore(10, '\n');
		return 0;
	}
	try {
		cout << "enter b";
		cin >> b;
	}
	catch (const exception& ex)
	{
		cout << "Error: Incorrect digit!" << endl;
		cout << ex.what() << endl;
		cin.clear();
		cin.ignore(10, '\n');
		return 0;
	}
	try {
		cout << "Enter operation";
		cin >> operation;
	}
	catch (const exception& ex)
	{
		cout << "Error: Incorrect digit" << endl;
		cout << ex.what() << endl;
		cin.clear();
		cin.ignore(10, '\n');
		return 0;
	}

	cout << endl << "Result is: " << calculator(a, b, operation);

}
