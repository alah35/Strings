//����� ������ ����� ��� ����� � ��������
#pragma once
#include<iostream>;
#include<string>;
using namespace std;

class HelperForStrings
{
public:
	string Word;

	//����� ��������� �����
	void Print()
	{
		std::cout << Word <<"\n";
	}

	//����� �����
	void Length()
	{
		std::cout << Word.length() << "\n";
	}

	//����� ������� �� ������
	void Symbol(unsigned short x) // ��� �������� ������
	{
		char str[255]; //��� ������ ������� ��� ����� ����� ��� �����, ������� ��������� ������
		strcpy_s(str, Word.c_str()); // ������ ��� ���� ������ �������� ��������� ���������� 
		std::cout << str[x] << "\n";
	}

};

