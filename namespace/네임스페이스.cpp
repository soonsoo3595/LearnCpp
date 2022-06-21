#include <stdio.h>

// 네임스페이스란?
// 객체나 함수의 이름을 가지고 있는 공간
// 중복되는 이름들의 충돌을 방지하기 위해 네임스페이스를 사용
// 하나의 네임스페이스에서는 단 하나의 변수 이름만 사용할 수 있다

namespace A
{
	int N = 10;
	void PrintN() { printf("A의 PrintN()? : %d\n", N); }
}

namespace B
{
	int N = 20;
	void PrintN() { printf("B의 PrintN()? : %d\n", N); }
}

int main()
{
	// C++에서 새로 추가된 연산자
	// 1. 범위 지정 연산자 (::)		- 네임스페이스 멤버, 클래스 멤버 호출할때 사용
	// 2. 멤버 포인터 연산자 (->)	- 클래스 멤버를 가리키는 포인터 정의
	// 3. typeid()					- 객체 타입에 대한 정보 확인

	printf("네임스페이스 A의 N값은? %d\n", A::N);
	printf("네임스페이스 B의 N값은? %d\n", B::N);

	A::PrintN();
	B::PrintN();



	return 0;
}