/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: Show if the number is a multiple of 2, 5 or 10 and return true or false for each case.
Made in Visual Studio
*/

#include<iostream>

using namespace std;

bool FirstFunction(int); // Declaration of the First Function
bool SecondFunction(int); // Declaration of the Second Function

int main()
{
	int n;

	// Here I get the number entered by the user
	cout << "Give me an integer, please: ";
	cin >> n;
	cout << "--------------------------------------------------" << endl;

	// In this part I look for the functions and send the value to the letters that will return the boolean value
	bool a = FirstFunction(n);
	bool b = SecondFunction(n);

	// Showing the result to users
	cout << a << endl;
	cout << "--------------------------------------------------" << endl;
	cout << b << endl;
	cout << "--------------------------------------------------" << endl;

	return 0;
}

bool FirstFunction(int n)
{
	if (n % 2 == 0) // if the remainder of the division by 2 is equal to zero
	{
		cout << "It's a multiple of two" << endl;
		return true;
	}
	else { // others:
		cout << "It's not a multiple of two" << endl;
		return false;
	}
}

bool SecondFunction(int n)
{
	if (n % 5 == 0) // if the remainder of the division by 5 is equal to zero
	{
		cout << "It's a multiple of five" << endl;
		return true;
		cout << "--------------------------------------------------" << endl;
	}
	else if (n % 10 == 0) // if the remainder of the division by 10 is equal to zero
	{
		cout << "It's a multiple of ten" << endl;
		return true;
		cout << "--------------------------------------------------" << endl;
	}
	else { // others:
		cout << "It's not a multiple of five and ten" << endl;
		return false;
		cout << "--------------------------------------------------" << endl;
	}
}