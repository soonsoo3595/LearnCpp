#include <iostream>
#include "����Ŭ����4.h"

using namespace std;

int main()
{
	����Ŭ����4		student[5];
	int				score = 0; 
	int				id = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° �л��� score�� id �Է����ּ���" << endl;
		cin >> score >> id;
		student[i].setScore(score);
		student[i].setId(id);
	}

	int				sum = 0; // ����
	double			average = 0; // ���
	int				max	= 0; // ���� ���� ������ ���� �л� ����
	int				max_id = 0; // ���� ���� ������ ���� �л��� ID

	
	for (int i = 0; i < 5; i++)
	{
		if (max < student[i].getScore())
		{
			max = student[i].getScore();
			max_id = i;
		}
		sum += student[i].getScore();
	}

	average = (double)sum / 5;

	cout.precision(2);
	cout << fixed << "���� : " << sum << ", ��� : " << average << endl;
	cout << "���� ���� ������ ���� �л��� ID : " << student[max_id].getId() << "���� : " << max << endl;
	
	
	return 0;
}