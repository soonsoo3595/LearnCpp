#include "����Ŭ����.h"

int main()
{
	����Ŭ����* c_Class = new ����Ŭ����;
	����Ŭ����* y_Class = new ����Ŭ����;
	
	cout << "name : ";
	cin >> c_Class->m_Name;

	cout << "score : ";
	cin >> c_Class->m_Score;

	cout << "name : ";
	cin >> y_Class->m_Name;

	cout << "score : ";
	cin >> y_Class->m_Score;

	if (c_Class->m_Score > y_Class->m_Score)
	{
		cout << "ö���� ������ ������ �������� " << c_Class->m_Score - y_Class->m_Score << "�� �����ϴ�." << endl;
	}
	else
	{
		cout << "������ ������ ö���� �������� " << y_Class->m_Score - c_Class->m_Score << "�� �� �����ϴ�." << endl;
	}

	delete c_Class; delete y_Class;
	return 0;
}