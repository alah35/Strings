#pragma once
#include<iostream>;

class Math
{
public:

	void PrintEven(int N)
	{
		int i = 0;
		while (i < N)
		{
			if (i % 2 == 0)
			{
				std::cout << i<<"\n";
			}
			i++;

		}
	}

	void PrintYour(bool x, int N)
	{
		if (x)
		{
			for (int i = 0; i < N; i++)
			{
				if (i % 2 != 0)
				{
					std::cout << i<<"\n";
				}
			}
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				if (i % 2 == 0)
				{
					std::cout << i<<"\n";
				}
			}
		}
	};

};