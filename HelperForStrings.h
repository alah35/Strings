#pragma once
#include<iostream>;
#include<string>;
using namespace std;

class HelperForStrings
{
public:
	string Word;

	void Print(string x)
	{
		std::cout << x <<"\n";
	}

	void Length(string x)
	{
		std::cout << x.length() << "\n";
	}

	void Symbol(uint8_t x, char y[])
	{
		std::cout << y[x] << "\n";
	}

};

