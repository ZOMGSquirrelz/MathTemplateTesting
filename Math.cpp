/*Eric Conard
This is the Math.cpp file. Requires the cmath for pow(), stdlib.h for system('cls'), and string*/

#include "Math.h"
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;

int getNumType()		//Prints menu for what type of number will be entered
{
	int Choice;
	cout << "What number type would you like to use?" << endl;
	cout << "1 - Integer" << endl;
	cout << "2 - Float" << endl;
	cout << "3 - Binary" << endl;
	cout << "Choice: ";
	cin >> Choice;
	if(Choice <= 0 || Choice >= 4)	//Checks if choice is a 1, 2, or 3
	{
		cout << "Invalid entry" << endl;
		getNumType();
	}
	else// Clears screen and returns the user's choice
	{
		system("cls");
		return Choice;
	}
}

int getOppType()		//Prints menu for what will be done to the numbers entered
{
	int Choice;
	cout << "What would you like to do to the numbers?" << endl;
	cout << "1 - Add" << endl;
	cout << "2 - Subtract" << endl;
	cout << "3 - Multiply" << endl;
	cout << "4 - Divide" << endl;
	cout << "Choice: ";
	cin >> Choice;
	if(Choice <= 0 || Choice >= 5)		//Checks if choice is a 1, 2, 3, or 4
	{
		cout << "Invalid entry" << endl;
		getOppType();
	}
	else
	{
		return Choice;
	}
}

long long int toBinary(int a)		//Converts an int into a binary number
{
	
	int decimal = a, remainder, place = 1;
	long long int binary = 0;
	while(decimal != 0)
	{
		remainder = decimal % 2;
		binary += remainder * place;
		place *= 10;
		decimal /= 2;
	}
	return binary;
}

int toDecimal(string a)		//Converts string input into a decimal number
{
	int decimal = 0, remainder, binary = stoi(a), i = 0;
	while(binary != 0)
	{
		remainder = binary % 10;
		binary /= 10;
		decimal += remainder * pow(2, i);
		i++;
	}
	return decimal;
}

bool checkIfInt(string a)		//Checks if string inpt is an integer
{
	if(a.size() == 0)	//Returns fail if nothing is entered
	{
		return false;
	}
	for(int i = 0; i < a.size(); i++)
	{
		if(!isdigit(a[i]))		//Returns false if an part of the string is not a number
		{
			return false;
		}
	}
	return true;
}

bool checkIfFloat(string a)		//Checks if string input is a float
{
	int dotCheck = 0;
	if(a.size() == 0)	//Returns false if nothing is entered
	{
		return false;
	}
	for(int i = 0; i < a.size(); i++)
	{
		if(!isdigit(a[i]))		//Continues if current spot is not a number
		{
			if(a[i] == '.' && dotCheck == 0)	//If the current spot is the first ., it adds one to the dotCheck counter
			{
				dotCheck++;	
			}
			else if(a[i] == '.'&& dotCheck>=1)		//If the current spot is a . and is not the first, returns false
			{
				return false;
			}
		}
	}
	return true;
}

bool checkIfBinary(string a)	//Checks if string input is a binary number
{
	if(checkIfInt(a))	//Checks to see if input is an integer
	{
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] != '0')		//Continues if current spot is not a 0
			{
				if(a[i] != '1')		//If current spot is also not a 1, returns false
				{
					return false;
				}
			}
		}
		return true;
	}
}
