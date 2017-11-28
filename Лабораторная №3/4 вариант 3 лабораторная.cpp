/*4.	В текстовом файле INPUT.TXT записаны целые числа через пробел, возможно, в несколько строк. 
За один просмотр файла сформировать список этих чисел. 
Вставить новый элемент в список перед каждым вхождением заданного с клавиатуры элемента. 
Полученный список занести в текстовый файл OUTPUT.TXT.*/
#include <iostream> 
#include <fstream> 

using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int N, x, y, k, p, t;
	int* A = new int[1000];
	int* I = new int[1000];
	cout << "Enter the specified list item:" << endl;/*Введите заданный элемент списка*/
	cout << "x = ";
	cin >> x;
	cout << "Enter the item to insert :" << endl;/*Введите элемент, который вставить*/
	cout << "y = ";
	cin >> y;
	k = 0;
	while (fin >> N)
	{
		A[k] = N;
		k++;
	}
	p = 0;
	for (int i = 0; i < k; i++)
	{
		if (A[i] == x)
		{
			I[p] = i;
			p++;
		}
	}
	t = 0;
	while (t < p)
	{
		for (int i = k + t; i > I[t] + t; i--)
		{
			A[i] = A[i - 1];
		}
		A[I[t] + t] = y;
		t++;
	}
	for (int i = 0; i < k + p; i++)
	{
		fout << A[i] << " ";
	}
	fin.close();
	fout.close();
	delete[] A;
	delete[] I;
	system("pause");
	return 0;
}
