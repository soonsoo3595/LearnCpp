// 생성자란?
// 클래스가 객체로 생성되었을 경우 호출하는 메소드
// 클래스와 이름이 같고, 반환하는 자료형이 존재하지 않습니다

// 소멸자란?
// 객체가 소멸할때 호출하는 메소드
// 클래스와 이름이 같고 반환하는 자료형이 존재X
// 메소드 이름 앞에 '~'이 붙음
#include "생성자소멸자_클래스.h"

int main()
{
	생성자소멸자_클래스 mClass;

	cout << "프로그램을 종료합니다." << endl;

	return 0;
}