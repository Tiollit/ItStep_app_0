#include <iostream>
using namespace std;

int main()
{
	bool tr = false, Tr2 = false, Tr3 = false;
	string A, B, C;
	while (tr = false) 
	{
		setlocale(LC_CTYPE, "ukr");
		cout << "На питання прошу відповідати так або ні" << endl;
		cout << "Вихідні ніпруги відрізняються від номінальних?" << endl;
		cin >> A;
		if (A == "Ні") break;
		cout << "Напруга на 12-му виводі ШИМ контролера в нормі (7-24В)?" << endl;
		cin >> A;
		if (A == "Так")
		{
			while (Tr2 == false)
			{
				cout << "Якщо будь-яке з цих тверджень не вірне напишіть Ні і виконайте заміну мс ШИМ:" << endl;
				cout << " - Напруга джерела опорної напруги мс ШИМ рівно +5В (вивід 12В)?" << endl;
				cout << " - Напруга пилки дорівнює 3.4В?" << endl;
				cout << " - Цепи регулювання мс ШИМ справні?" << endl;
				cin >> B;
				if (B = "Так") Tr2 = true;				
			}
			while (Tr3 == false)
			{
				cout << "Цепи ОС блока справні?" << endl;
				cin >> B;
				if (B == "Так") break;
				else if (B == "Ні")
				{
					cout << "Перевірити лінію подачі ОС (резистори), несправні елементи замінити" << endl;
					cout << "Блок працює нормально?" << endl;
					cin >> C;
					if (C == "Так") break;
				}
			}

		}
		else if (A == "Ні")
		{
			cout << "Лінія живлення від допоміжного перетворювача справна?" << endl;
			cin >> C;
			if (C == "Ні")
			{

			}
		}

	}

	return 0;
}