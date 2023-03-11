#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main()
{
	bool Tr1 = false, Tr2 = false, Tr3 = false, Tr4 = false;
	string A, B, C, D;
	system("chcp 1251");
	cout << "Проверка блока питания:" << endl;
	cout << "На вопросы прошу отвечать да или нет" << endl;
	while (Tr1 == false)
	{
		cout << "БП не видает напряжения?" << endl;
		cin >> A;
		if (A == "да")
		{
			cout << "Выполнить подключение БП к сети" << endl;
		}
		else
		{
			Tr1 == true;
			Tr2 == true;
		}
		while (Tr2 == false)
		{
			cout << "Сетевое напряжение в наличии?" << endl;
			cin >> B;
			if (B == "да")
			{

			}
		}
	}
	

	return 0;
}