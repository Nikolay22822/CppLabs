#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	a++;
	cout << a << endl;
	unsigned int b = -10;
	float c = 1.2;
	double d = 4;
	long l = 10000;

	int i = a;
	cout << i << endl;

	int e = b;
	cout << e << endl;

	int q = c;
	cout << q << endl;

	int w = d;
	cout << w << endl;

	int r = l;
	cout << r << endl;
	
	int floatedNumber = r / q;
	int integerPart = floatedNumber;
	cout << integerPart << endl;
	int result;
	result = integerPart * e - q / w;
	cout << result;
	system("pause");
	return 0;
}

