#include <iostream>
#include "����Ŭ����.h"
using namespace std;

int main()
{
	// �Ҵ���� ���� �����ͺ����� �����Ҵ��� �޸𸮸� ����������
	// �����Ҵ��� �޸��� ����� �����ٸ� �ݵ�� ��������ߵȴ�
	����Ŭ����* pClass = new ����Ŭ����; // ���� �Ҵ�
	
	// �̸�,���� �Է¹ޱ�
	cout << "name : ";
	cin >> pClass->m_Name;

	cout << "score : ";
	cin >> pClass->m_Score;

	pClass->PrintRank();
	
	delete pClass;	// ��ȯ
	
	return 0;
}