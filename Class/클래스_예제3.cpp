#include <iostream>
#include "샘플클래스3.h"

using namespace std;


int main()
{
	샘플클래스3		mClass;
	char			tempName[256];

	cout << "name? ";
	cin >> tempName;
	
	mClass.SetName(tempName);

	cout << mClass.GetName() << endl;

	return 0;
}