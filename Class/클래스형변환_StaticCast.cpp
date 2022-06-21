#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{
public:
	int A = 1;
	void Print() { cout << "Parent " << A << endl; }
};

class Child : public Parent
{

public:
	int B = 2;
	void Print() { cout << "Child " << B << endl; }
};

class SampleClass
{
public:
	int A = 3;
	int B = 4;
	void Print() { cout << "Sample " << A << endl; }
};

int main()
{
	// static_cast
	// compile-time (프로그램 구동 전 컴파일 하는 구간) // run-time (프로그램이 동작하고 있는 시간)
	// compile-time에 정적으로 형변환하는 캐스트 연산자
	// 상속관계를 캐스팅 할 수 있으며, 클래스를 정확히 알고 있을 경우에만 사용
	// 변환 비용(메모리 사용?)이 적기 때문에 자주 사용
	// (dynamic_cast는 run-time에 체크)

	Parent mParent;
	Child* pChild = static_cast<Child*>(&mParent);
	pChild->Print(); // 함수는 호출하지만 결과는 쓰레기 값, 메모리가 초기화 안돼서

	Child mChild;
	Parent* pParent = static_cast<Parent*>(&mChild);
	pParent->Print(); // OK

	SampleClass mSample;
	// Parent* pParent2 = static_cast<Parent*>(&mSample); // 상속관계가 아닌 다른 클래스간의 형변환은 불가능합니다

	
	return 0;
}