/*2 вариант. Дан файл INPUT.txt. В нём записаны показания счётчиков электроэнергии граждан.
Необходимо найти ФИО и среднее потребление граждан, у которых среднеезначение потребление граждан больше,
чем у остальных. Ответ выведите в файл INPUT.txt

Файл INPUT.txt:
Иванов;Иван;Иванович;60;120;150;170
Сидоров;Сидр;Сидорович;15;18;20;23
Богатырёв;богатырь;Богатырович;110;160;190;210;250*/


#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "Rus");
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	fout << "Иванов;Иван;Иванович;60;120;150;170" << endl;
	fout << "Сидоров;Сидр;Сидорович;15;18;20;23" << endl;
	fout << "Богатырёв;богатырь;Богатырович;110;160;190;210;250" << endl;
	char buff[255];
	char*tmp = buff;
	while (!fin.eof())
	{
		fin.getline(buff, 255);
	}


	return 0;
}
