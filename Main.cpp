/*Eric Conard
This is the Main.cpp file with a call to the Math.h file*/
#include <iostream>
#include <string>
#include "Math.h"

using namespace std;

int main()
{
	int tChoice, oChoice;			//Variable creation
	long long int a, b, tempA, tempB;
	string first, second;
	float c, d;
	tChoice = getNumType();		//Calls function for input type menu
	switch(tChoice)			//Switch based on input type
	{
	case 1:	//Integers
		cout << "First integer: ";
		cin >> first;
		while(checkIfInt(first) == false)		//Checks if the string input is an integer
		{
			cout << "Invalid Entry- Please enter an integer: ";		//Asks for valid integer until it passes
			cin >> first;
		}
		a = stoi(first);		//Converts input string to an integer
		cout << "Second integer: ";
		cin >> second;
		while(checkIfInt(second) == false)
		{
			cout << "Invalid Entry- Please enter an integer: ";
			cin >> second;
		}
		b = stoi(second);
		oChoice = getOppType();		//Calls function for opperator type menu
		switch(oChoice)		//Switch based on opperator type
		{
		case 1:		//Addition
			cout << a << " + " << b << " = " << add(a, b) << endl;
			break;
		case 2:		//Subraction
			cout << a << " - " << b << " = " << subtract(a, b) << endl;
			break;
		case 3:		//Multiplication
			cout << a << " * " << b << " = " << multiply(a, b) << endl;
			break;
		case 4:		//Simple division
			cout << a << " / " << b << " = " << divide(a, b) << endl;
			break;
		}
		break;
	case 2:		//Floats
		cout << "First float: ";
		cin >> first;
		while(checkIfFloat(first) == false)		//Checks if string input is a float
		{
			cout << "Invalid Entry- Please enter a float: ";
			cin >> first;
		}
		c = stof(first);		//Converts string input to a float
		cout << "Second float: ";
		cin >> second;
		while(checkIfFloat(second) == false)
		{
			cout << "Invalid Entry- Please enter a float: ";
			cin >> second;
		}
		d = stof(second);
		oChoice = getOppType();
		switch(oChoice)
		{
		case 1:
			cout << c << " + " << d << " = " << add(c, d) << endl;
			break;
		case 2:
			cout << c << " - " << d << " = " << subtract(c, d) << endl;
			break;
		case 3:
			cout << c << " * " << d << " = " << multiply(c, d) << endl;
			break;
		case 4:
			cout << c << " / " << d << " = " << divide(c, d) << endl;
			break;
		}
		break;
	case 3:		//Binary
		cout << "First binary number: ";
		cin >> first;
		while(checkIfBinary(first) == false)		//Checks if string input is a binary number
		{
			cout << "Invalid Entry- Please enter a binary number: ";
			cin >> first;
		}
		tempA = toDecimal(first);		//Converts string input into a decimal integer
		cout << tempA << endl;		
		cout << "Second binary number: ";
		cin >> second;
		while(checkIfBinary(second) == false)
		{
			cout << "Invalid Entry- Please enter a binary number: ";
			cin >> second;
		}
		tempB = toDecimal(second);
		cout << tempB << endl;
		oChoice = getOppType();
		switch(oChoice)
		{
		case 1:
			cout << first << " + " << second << " = " << toBinary(add(tempA, tempB)) << endl;		//Converts the result of numbers being added to a binary number
			break;
		case 2:
			cout << first << " - " << second << " = " << toBinary(subtract(tempA, tempB)) << endl;
			break;
		case 3:
			cout << first << " * " << second << " = " << toBinary(multiply(tempA, tempB)) << endl;
			break;
		case 4:
			cout << first << " / " << second << " = " << toBinary(divide(tempA, tempB)) << endl;
			break;
		}
		break;
	}

	return 0;
}