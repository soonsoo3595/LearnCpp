#include <iostream>
#include "����Ŭ����.h"

using namespace std;

int main()
{
	����Ŭ����		mClass;				// ���� �Ҵ�
	����Ŭ����*		pClass = &mClass;	// mClass�� �ּҰ��� ����

	// ����������?
	// �Ҵ�� �޸𸮸� �����ϴ� ����
	����Ŭ����&		rClass = mClass;	// ��������

	cout << "name :";
	cin >> rClass.m_Name;
	
	cout << "score? ";
	cin >> rClass.m_Score;

	rClass.PrintRank();

	
	return 0;
}

