#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{

public:
	int		A = 1;
	void	Print() { cout << "Parent Print() :" << A << endl; }
};

class Child : public Parent
{

public:
	int		B = 2;
	void	Print() { cout << "Child Print() :" << B << endl; }
};

class SampleClass
{
public:
	int A = 3;
	int B = 4;
};

int main()
{
	// 형변환
	// 축소 변환 or 확대변환

	// 클래스 크기
	cout << "size P : " << sizeof(Parent) << " size C : " << sizeof(Child) << endl;

	// C언어의 형변환 (type-id)(e-pression) 
	// 어떤 자료형이든 강제로 바꿀 수 있다 ( 세심한 캐스팅이 불가능)
	
	// C++ 형변환 : static_cast<type-id>(e-pression)
	// 1. static_cast		: C언어 형변환과 똑같은 형변환(변환 비용이 저렴하다(빌드를 할때 컴파일 단계에서 형변환 시킬때 사용) / 명확한 클래스를 알고있어야한다) 
	// 런타임 : 프로그램이 실행되고 있는 시간
	// 2. dynamic_cast		:  동적 상속 관계 / 다운캐스팅 시 사용 (변환비용이 큼, 런타임)
	// 3. const_cast		: 상수성 부여 / 해제
	// 4. reinterpret_cast	: 포인터 타입의 형변환(어떠한 포인터 타입으로든 변환 가능)

	// C언어 형변환
	// 1. Parent 포인터에 Parent 클래스 할당 참조
	Parent* p_Parent = new Parent();

	p_Parent->Print();

	// 2. Child 포인터에 Child 클래스 할당 / 참조
	Child* p_Child = new Child();
	p_Child->Print();

	// 3. Parent 포인터에 Child 클래스 할당 (축소 변환)
	Parent* p_Parent2 = new Child();
	p_Parent2->Print();

	// 4. Child 포인터에 Parent 클래스 할당(확대 변환 -> 기본적 에러)
	Child* p_Child2 = (Child*)new Parent(); // Parent 메모리가 Child 메모리보다 작기때문에
	// 쓰레기 값 나옴
	p_Child2->Print();

	// 5. Child 포인터에 p_Parent2가 가리키는 메모리를 참조
	Child* p_Child3 = (Child*)p_Parent2;
	p_Child3->Print();

	// 6. Parent 포인터에 p_Child2가 가리키는 메모리 참조
	Parent* p_Parent3 = p_Child2;
	p_Parent3->Print();

	// 7. Child 포인터에 SampleClass의 메모리 할당 / 참조 (전혀 관련없는 클래스)
	Child* p_Child4 = (Child*)new SampleClass();
	p_Child4->Print();

	delete p_Parent; delete p_Parent2;
	delete p_Child; delete p_Child2; delete p_Child4;

	return 0;
}