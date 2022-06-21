#include <iostream>
#pragma warning(disable : 4996)

using namespace std;


int main()
{
	// reinterpret_cast
	// 어떠한 포인터 타입도 어떠한 포인터 타입으로 형변환이 가능, 포인터간 형변환
	// ex. int* -> char* / char* -> int*

	// 강력한 캐스트 연산자지만 강제 형변환되기 때문에 변환관계에 놓인 두 개체의 관계가
	// 명확하거나 특정 목적을 달성하기 위할 때만 사용하는 것이 바람직
	
	// 컴파일 성공 (주소값 유효 체크하지 않음) [&을 붙여주셔야합니다.]
	int N = 65;
	char* pArray = reinterpret_cast<char*>(&N); // &안넣으면 죽어버림

	cout << pArray << endl;
	
	// 강의랑 똑같은 코드인데 이부분은 잘 실행이 안됨..?
	// 변수 m에 pArray2의 시작 주소값이 들어가야되는데 안들어가진다 흠..
	// const char* pArray2 = "Hello";
	// int m = reinterpret_cast<int>(pArray2);

	// pArray2의 시작 주소값 출력
	// cout << m << endl;

	// 시작 주소값을 char* mChar안에 넣어서 '\0'문자까지 출력

	// 
	// char* mChar = reinterpret_cast<char*>(m);
	// cout << mChar << endl;

	// static_cast 사용			(함수처럼 임시변수 반환)
	int	A = 10;
	// float* B = static_cast<float*>(&A); // 사용 불가능
	float B = static_cast<float>(A);	// 사용 가능(일반자료형 형변환이 가능)


	// reinterpret_cast 사용	(캐스팅되는 개체를 실제로 변경)
	int C = 10;
	float* D = reinterpret_cast<float*>(&C); // 사용 가능, 문법상 에러 X, 결과값을 알 수 없음
	// float D = reinterpret_cast<float>(C)	 // 사용 불가능, 일반 자료형끼리 형변환이 불가능

	return 0;
}