#include <iostream>
#include "����Ŭ����2.h"
using namespace std;

int main()
{
	����Ŭ����2 mClass;
	
	// mClass�� secret_key�� 100���� ����
	mClass.SetKey(100);

	// mClass�� secret_key ���
	cout << mClass.GetKey() << endl;

	return 0;
}