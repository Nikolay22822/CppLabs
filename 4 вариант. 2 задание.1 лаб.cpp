// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	double a, b, c, x;
	cout << "enter a,a!=0" << endl;
	cin >> a>>b>>c;
	if (a == 0)
		cout << "error:a=0" << endl;
	else
	{
		double D = (b*b) - (4 * (a*c));
		if (D < 0)
		cout << "Без корней" << endl;
		else
		{
			double X1 = (-b + sqrt(D)) / (2 * a);
			double X2 = (-b - sqrt(D)) / (2 * a);
			if (X1 == X2)
				cout << "X =" << X1 << endl;
			else
				cout << "X1 =" << X1 << endl;
			cout << "X2 ="<< X2<< endl;
		}

	}
	
	return 0;

}


