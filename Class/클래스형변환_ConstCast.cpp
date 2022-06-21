#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	// const_cast
	// 상수성 부여 or 상수성 제거

	// 1. 상수성 부여
	char mArray[] = "Hello"; // 상수값이 아니기에 마음대로 자료형 바꿀수있음
	char mArray2[] = "World";

	// 1. const int* p
	// - 포인터가 가리키는 int값을 바꿀 수 없습니다
	// - 다른 메모리를 참조하도록 설정 가능
	 
	// 2. int* const p
	// - 포인터가 가리키는 값을 바꿀 수 있음
	// - 다른 메모리를 참조하도록 설정 불가능
	
	// 3. const int* const p
	// - 포인터가 가리키는 값을 바꿀 수 없음
	// - 다른 메모리를 참조하도록 설정 불가능

	const char* pChar = const_cast<char*>(mArray);
	// pChar[0] = 'A'; -> error
	pChar = mArray2; // ok 다른 메모리 참조하도록 설정 가능

	char* const pChar2 = const_cast<char*>(mArray); 
	pChar2[0] = 'A';		// pChar2가 참조하는 메모리의 값 변경 가능
	// pChar2 = mArray2;	// pChar2가 다른 메모리를 참조하도록 설정하는것 불가능

	// 2. 상수성 제거
	const char mArray3[] = "ABCDEF"; // 상수성 부여되어있음 변경 불가능
	char* pChar3 = const_cast<char*>(mArray3);

	// mArray3[0] = 'Z';	// 문자열 상수이기 때문에 값의 변경이 불가능
	pChar3[0] = 'Z';		// 상수성이 제거되었기 때문에 값의 변경이 가능

	cout << pChar3 << endl;

	return 0;
}