#include<iostream>;
#include<string>;
#include"HelperForStrings.h";
#include"Math.h";

int main()
{
	Math Class;
std:cout << "Enter N: ";
	int N;
	std::cin >> N;
	Class.PrintEven(N);
	std::cout << "Enter 0 if you want to output even numbers, 1 if odd: ";
	bool x;
	std::cin >> x;
	Class.PrintYour(x, N);
}
