#include <iostream>
#include "샘플클래스2.h"
using namespace std;

int main()
{
	샘플클래스2 mClass;
	
	// mClass의 secret_key를 100으로 변경
	mClass.SetKey(100);

	// mClass의 secret_key 출력
	cout << mClass.GetKey() << endl;

	return 0;
}