// 클래스란?
// 객체의 집합, 설계도

#include <iostream>
#include "샘플클래스.h"


int main()
{
	샘플클래스 mClass;
	
	cout << "name? ";
	cin >> mClass.m_Name;

	cout << "score? ";
	cin >> mClass.m_Score;

	cout << endl << "-----" << mClass.m_Name << "님의 등급은? " << "-----" << endl;
	mClass.PrintRank();

	return 0;
}