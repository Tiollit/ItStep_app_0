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
	cout << "�������� ����� �������:" << endl;
	cout << "�� ������� ����� �������� �� ��� ���" << endl;
	while (Tr1 == false)
	{
		cout << "�� �� ������ ����������?" << endl;
		cin >> A;
		if (A == "��")
		{
			cout << "��������� ����������� �� � ����" << endl;
		}
		else
		{
			Tr1 == true;
			Tr2 == true;
		}
		while (Tr2 == false)
		{
			cout << "������� ���������� � �������?" << endl;
			cin >> B;
			if (B == "��")
			{
				while (Tr3 = false)
				{
					cout << "������ PS-on ����� �� ��?" << endl;
					cin >> C;
					if (C == "��")
					{
						cout << "�������������� ��������?" << endl;
						cin >> D;
						if (D == "���")
						{
							cout << "��������� ���������������� �������� ������ � ������������� �� ����������� � ��" << endl;
							cout << "�������� ����������� ������� � ��������������" << endl;
							cout << "��������� ���������� ���������� ��������� �� �����. ������ ������� ����������" << endl;
						}
						else if (D == "��")
						{
							while (Tr4 = false)
							{
								cout << "���������� �� ������ ��-����������� ����� 300�?" << endl;
								cin >> E;
								if (E == "���")
								{
									cout << "��������� ����������� ���������� � ��������� ����������� ����������" << endl;                                
								}
								else if (E == "���")
								{
									Tr4 = true;
								}

							}
							while (Tr5 = false)
							{
								cout << "��������������� ��������������� ������ ���������� +5� SB?" << endl;
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