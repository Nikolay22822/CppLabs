// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int i;
	for (i = 10; i < 100; i++)
	{
		int a, b, c;
		a = i % 10;
		b = i / 10;
		c = (a + b) + ((a + b)*(a + b));
		if (c == i)
			cout << i << endl;
	}
	return 0;
}

