#include<iostream>;
#include<string>;
#include"HelperForStrings.h";

int main()
{
	std::cout << "Enter your word:";
	HelperForStrings HFS;
	std::getline(std::cin, HFS.Word);

	std::cout << "Your word:";
	HFS.Print();

	std::cout << "Length of your word:";
	HFS.Length();

	std::cout << "Enter number of symbol: ";
	unsigned short x;
	std::cin >> x;
	HFS.Symbol(x - 1); //потомучто с++ начинает подсчет с нуля
}