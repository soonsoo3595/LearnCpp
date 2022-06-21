#include <iostream>
#include "샘플클래스.h"
using namespace std;

int main()
{
	// 할당되지 않은 포인터변수에 동적할당한 메모리를 참조시켜줌
	// 동적할당한 메모리의 사용이 끝났다면 반드시 해제해줘야된다
	샘플클래스* pClass = new 샘플클래스; // 동적 할당
	
	// 이름,점수 입력받기
	cout << "name : ";
	cin >> pClass->m_Name;

	cout << "score : ";
	cin >> pClass->m_Score;

	pClass->PrintRank();
	
	delete pClass;	// 반환
	
	return 0;
}