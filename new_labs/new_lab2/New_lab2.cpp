#include <iostream>
using namespace std;

int main()
{
	float c = 1.2;
	double d = 4;
	int a = 5;
	a++;
	cout << a << endl;
	unsigned int b = -10;
	long l = 10000;
	int floatedNumber = l / c;
	int integerPart = floatedNumber;
	cout << floatedNumber << endl;
	double result;
	result = integerPart * b - c / d;
	cout << result<<endl;
	system("pause");
	return 0;
}

