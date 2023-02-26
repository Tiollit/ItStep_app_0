#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool tr = false, Tr2 = false, Tr3 = false, Tr4 = false;
	string A, B, C, D;
	setlocale(LC_ALL, "Russian");
	while (tr == false) 
	{		
		cout << "На вопрос прошу отвечать да или нет:" << endl;
		while (Tr4 == false)
		{
			cout << "Все выходные напряжения отличаються от нормальной величины?" << endl;
			cin >> A;
			if (A == "нет")
			{
				Tr4 = true;
				break;
			}
			cout << "Напряжение на 12 выводе ШИМ контроллера в норме (7-24В)?" << endl;
			cin >> D;
			if (D == "да")
			{
				while (Tr2 == false)
				{
					cout << "Если какое-нибуть утверждение из ниже приведенных неверно - напишите нет и выполните замену мс ШИМ:" << endl;
					cout << " - Напряжение источника опорного напряжения мс ШИМ равно +5В (вывод 14)?" << endl;
					cout << " - Амплитуда \"пилы\" равна 3.2В?" << endl;
					cout << " - Цепи регулирования мс ШИМ исправны?" << endl;
					cin >> B;
					if (B == "да") Tr2 = true;
				}
				while (Tr3 == false)
				{
					cout << "Цепи ОС блока исправны?" << endl;
					cin >> B;
					if (B == "да")
					{
						Tr3 = true;
						Tr4 = true;
						break;
					}
					else if (B == "нет")
					{
						cout << "Проверить цепь подачи ОС (резисторы), неисправные заменить" << endl;
						cout << "Блок работает нормально" << endl;
						cin >> C;
						if (C == "да")
						{
							Tr3 = true;
							Tr4 = true;
							break;
						}
					}
				}

			}
			else if (D == "нет")
			{
				cout << "Цепь питания от вспомогательного преобразователя исправна?" << endl;
				cin >> C;
				if (C == "нет")
				{
					cout << "Проверить цепи питания (диод и конденсатор)" << endl;

				}
				else if (C == "да") Tr4 = true;
			}
		}

	}
	cout << "Напряжение в норме" << endl;
	return 0;
}