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

			}
		}
	}
	

	return 0;
}