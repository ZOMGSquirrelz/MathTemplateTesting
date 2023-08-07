/*Eric Conard
This is the Math.h file.
Contains the math templates*/

#pragma once
#include <iostream>

using namespace std;

template<typename T>	//Addition
T add(T &a, T &b)
{
	return a + b;
}

template<typename T>	//Subtraction
T subtract(T &a, T &b)
{
	return a - b;
}

template<typename T>	//Multiplication
T multiply(T &a, T &b)
{
	return a * b;
}

template<typename T>	//Simple division
T divide(T &a, T &b)
{
	return a / b;
}

int getNumType();
int getOppType();
long long int toBinary(int a);
int toDecimal(string a);
bool checkIfInt(string a);
bool checkIfFloat(string a);
bool checkIfBinary(string a);