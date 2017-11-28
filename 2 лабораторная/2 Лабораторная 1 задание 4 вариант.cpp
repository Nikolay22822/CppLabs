#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0, pr = 1;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
    {
		cin >> a[i];
		sum = sum + a[i];
		pr = pr*a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			a[i] = a[i] * a[i];
	}
    bool check = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1]);
		check = 0;
	}
    if (check == 1)
		cout << sum;
	else
		cout << pr;
	return 0;
}