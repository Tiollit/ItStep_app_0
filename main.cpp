#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main()
{
	bool Tr = false, Tr2 = false, Tr3 = false, Tr4 = false;
	string A, B, C, D;
	system("chcp 1251");
	while (Tr == false) 
	{		
		cout << "�� ������ ����� �������� �� ��� ���:" << endl;
		while (Tr4 == false)
		{
			cout << "��� �������� ���������� ����������� �� ���������� ��������?" << endl;
			cin >> A;
			if (A == "���")
			{
				Tr = true;
				Tr4 = true;
				break;
			}
			cout << "���������� �� 12 ������ ��� ����������� � ����� (7-24�)?" << endl;
			cin >> D;
			if (D == "��")
			{
				while (Tr2 == false)
				{
					cout << "���� �����-������ ����������� �� ���� ����������� ������� - �������� ��� � ��������� ������ �� ���:" << endl;
					cout << " - ���������� ��������� �������� ���������� �� ��� ����� +5� (����� 14)?" << endl;
					cout << " - ��������� \"����\" ����� 3.2�?" << endl;
					cout << " - ���� ������������� �� ��� ��������?" << endl;
					cin >> B;
					if (B == "��") Tr2 = true;
				}
				while (Tr3 == false)
				{
					cout << "���� �� ����� ��������?" << endl;
					cin >> B;
					if (B == "��")
					{
						Tr = true;
						Tr3 = true;
						Tr4 = true;
						break;
					}
					else if (B == "���")
					{
						cout << "��������� ���� ������ �� (���������), ����������� ��������" << endl;
						cout << "���� �������� ���������" << endl;
						cin >> C;
						if (C == "��")
						{
							Tr = true;
							Tr3 = true;
							Tr4 = true;
							break;
						}
					}
				}

			}
			else if (D == "���")
			{
				cout << "���� ������� �� ���������������� ��������������� ��������?" << endl;
				cin >> C;
				if (C == "���")
				{
					cout << "��������� ���� ������� (���� � �����������)" << endl;

				}
				else if (C == "��") Tr4 = true;
			}
		}

	}
	cout << "���������� � �����" << endl;
	return 0;
}