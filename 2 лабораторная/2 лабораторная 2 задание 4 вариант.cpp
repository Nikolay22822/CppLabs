#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int b, c;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min)
			b = i;
	}
	for (int i = n; i > 0; i--)
		if (a[i] == max)
			c = i;
	for (int i = c + 1; i < b; i++)
	{
		if (a[i] % 2 == 0, a[i - 1] != 0)
			a[i] = -(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	delete[] a;
	return 0;
}
