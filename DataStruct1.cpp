// DataStruct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int main()
{
    std::cout << "Hello World!\n";
	std::cout << gcd(92, 1001);
}
