/*
In this code we will get a number from the user. We will write on the screen total of the digits of the number.
And if user does not enter three digits number, we will write a warning message on the screen.

Developer: Barış Someroğlu
Date: 05.01.2024 / 2:20 p.m.
*/


#include <iostream>

using namespace std;

int main()
{
	int Number, Ones, Tens, Hundereds, Total = 0;

	cout << "Please Enter the Number: ";
	cin >> Number;

	cout << "\n";

	if ( (Number / 10) >= 10 && (Number / 10) <= 99 )
	{
		Ones = Number % 10;

		Number = Number / 10;

		Tens = Number % 10;

		Number = Number / 10;

		Hundereds = Number;

		Total += Ones + Tens + Hundereds;

		cout << "Total for the digits of the Number: " << Total << endl;
	}

	else
	{
		cout << "Please Enter a Three Digits Number!" << endl;
	}

	return 0;
}