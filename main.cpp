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
		cout << "�� ������ ����� �������� �� ��� ���:" << endl;
		while (Tr4 == false)
		{
			cout << "��� �������� ���������� ����������� �� ���������� ��������?" << endl;
			cin >> A;
			if (A == "���")
			{
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