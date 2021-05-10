//«десь описан класс дл€ работ с строками
#pragma once
#include<iostream>;
#include<string>;
using namespace std;

class HelperForStrings
{
public:
	string Word;

	//вывод заданного слова
	void Print()
	{
		std::cout << Word <<"\n";
	}

	//вывод длины
	void Length()
	{
		std::cout << Word.length() << "\n";
	}

	//вывод символа по номеру
	void Symbol(unsigned short x) // дл€ экономии пам€ти
	{
		char str[255]; //дл€ вывода символа нам нужно знать его номер, поэтому объ€вл€ем массив
		strcpy_s(str, Word.c_str()); // потому что наша строка €вл€етс€ строковой переменной 
		std::cout << str[x] << "\n";
	}

};

