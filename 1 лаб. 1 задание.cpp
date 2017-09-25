// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	double x, y, z;
	const double pi = 3.1415;
	cin >> x >> y >> z;
	double a, b;
	a = (2 * cos(x + (pi / 4))) / (1 / 2 + (sin(y)*sin(y))) + (acos(x + (pi / 2)));
	b = (1) + (z*z) / (3 + (z*z /2));
	cout << a << endl << b;
	system("pause");
    return 0;
}

