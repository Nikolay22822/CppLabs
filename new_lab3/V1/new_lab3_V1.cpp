/*В программе загадано число. Пользователь кол-во попыток, 
за которое он готов угадать загаданное число, 
затем начинает вводить свои предположения.
Если он угадает, выводится "Victory!", Иначе "LOSER".*/


#include <iostream>

using namespace std;

int main()
{
	int a;
	a = 4;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Try out #" << i << ". Input even number: ";
		int n;
		cin >> n;
		if (n == a)
		{
			cout << "Victory!" << endl;
			break;
		}
		else if (n != 4)
		{
			cout << "LOSER" << endl;
		}
	}
}

