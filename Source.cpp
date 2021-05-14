#include<iostream>;
#include<string>;
#include"HelperForStrings.h";
#include"Math.h";
#include"MyArray.h"

int main()
{ 
	unsigned int x,y;
	std::cout << "Enter size of your array: N= ";
	std::cin >> x;
	std::cout << "M= ";
	std::cin >> y;
	MyArray Matrix(x, y);
	std::cout << "Your Matrix:\n";
	Matrix.Create();
	Matrix.Fill();
	Matrix.Print();
	unsigned int Today;
	std::cout << "Please, tell me what date it's today: ";
	std::cin >> Today;
	std::cout << "Solution of task:\n";
	Matrix.Summary(Today);
	Matrix.Print();
	Matrix.Clear();
	return 0;
}
