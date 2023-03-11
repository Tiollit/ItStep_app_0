#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main()
{
	bool Tr1 = false, Tr2 = false, Tr3 = false, Tr4 = false, Tr5 = false;
	string A, B, C, D, E, F;
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
				while (Tr3 = false)
				{
					cout << "Сигнал PS-on подан на БП?" << endl;
					cin >> C;
					if (C == "да")
					{
						cout << "Предохранитель исправен?" << endl;
						cin >> D;
						if (D == "нет")
						{
							cout << "Выполнить последовательную проверку диодов и конденсаторов НЧ выпрямителя и СФ" << endl;
							cout << "Заменить неисправный елемент и предохранитель" << endl;
							cout << "Проверить отсутствие короткогор замыкания по входу. Подать сетевое напряжение" << endl;
						}
						else if (D == "да")
						{
							while (Tr4 = false)
							{
								cout << "Напряжение на выходе НЧ-выпрямителя равно 300В?" << endl;
								cin >> E;
								if (E == "нет")
								{
									cout << "Проверить исправность термистора и элементов подключения напряжения" << endl;                                
								}
								else if (E == "нет")
								{
									Tr4 = true;
								}

							}
							while (Tr5 = false)
							{
								cout << "Вспомагательный преобразователь выдает напряжение +5В SB?" << endl;
								cin >> F;

							 
							}

						}

					}
				}

			}
		}
	}
	

	return 0;
}