#include <iostream>
using namespace std;

int main()
{
	bool tr = false, Tr2 = false, Tr3 = false;
	string A, B, C;
	while (tr = false) 
	{
		setlocale(LC_CTYPE, "ukr");
		cout << "�� ������� ����� ��������� ��� ��� �" << endl;
		cout << "������ ������ ����������� �� ����������?" << endl;
		cin >> A;
		if (A == "ͳ") break;
		cout << "������� �� 12-�� ����� ��� ���������� � ���� (7-24�)?" << endl;
		cin >> A;
		if (A == "���")
		{
			while (Tr2 == false)
			{
				cout << "���� ����-��� � ��� ��������� �� ���� �������� ͳ � ��������� ����� �� ���:" << endl;
				cout << " - ������� ������� ������ ������� �� ��� ���� +5� (���� 12�)?" << endl;
				cout << " - ������� ����� ������� 3.4�?" << endl;
				cout << " - ���� ����������� �� ��� ������?" << endl;
				cin >> B;
				if (B = "���") Tr2 = true;				
			}
			while (Tr3 == false)
			{
				cout << "���� �� ����� ������?" << endl;
				cin >> B;
				if (B == "���") break;
				else if (B == "ͳ")
				{
					cout << "��������� ��� ������ �� (���������), �������� �������� �������" << endl;
					cout << "���� ������ ���������?" << endl;
					cin >> C;
					if (C == "���") break;
				}
			}

		}
		else if (A == "ͳ")
		{
			cout << "˳�� �������� �� ���������� ������������� �������?" << endl;
			cin >> C;
			if (C == "ͳ")
			{

			}
		}

	}

	return 0;
}