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
	// ����ȯ
	// ��� ��ȯ or Ȯ�뺯ȯ

	// Ŭ���� ũ��
	cout << "size P : " << sizeof(Parent) << " size C : " << sizeof(Child) << endl;

	// C����� ����ȯ (type-id)(e-pression) 
	// � �ڷ����̵� ������ �ٲ� �� �ִ� ( ������ ĳ������ �Ұ���)
	
	// C++ ����ȯ : static_cast<type-id>(e-pression)
	// 1. static_cast		: C��� ����ȯ�� �Ȱ��� ����ȯ(��ȯ ����� �����ϴ�(���带 �Ҷ� ������ �ܰ迡�� ����ȯ ��ų�� ���) / ��Ȯ�� Ŭ������ �˰��־���Ѵ�) 
	// ��Ÿ�� : ���α׷��� ����ǰ� �ִ� �ð�
	// 2. dynamic_cast		:  ���� ��� ���� / �ٿ�ĳ���� �� ��� (��ȯ����� ŭ, ��Ÿ��)
	// 3. const_cast		: ����� �ο� / ����
	// 4. reinterpret_cast	: ������ Ÿ���� ����ȯ(��� ������ Ÿ�����ε� ��ȯ ����)

	// C��� ����ȯ
	// 1. Parent �����Ϳ� Parent Ŭ���� �Ҵ� ����
	Parent* p_Parent = new Parent();

	p_Parent->Print();

	// 2. Child �����Ϳ� Child Ŭ���� �Ҵ� / ����
	Child* p_Child = new Child();
	p_Child->Print();

	// 3. Parent �����Ϳ� Child Ŭ���� �Ҵ� (��� ��ȯ)
	Parent* p_Parent2 = new Child();
	p_Parent2->Print();

	// 4. Child �����Ϳ� Parent Ŭ���� �Ҵ�(Ȯ�� ��ȯ -> �⺻�� ����)
	Child* p_Child2 = (Child*)new Parent(); // Parent �޸𸮰� Child �޸𸮺��� �۱⶧����
	// ������ �� ����
	p_Child2->Print();

	// 5. Child �����Ϳ� p_Parent2�� ����Ű�� �޸𸮸� ����
	Child* p_Child3 = (Child*)p_Parent2;
	p_Child3->Print();

	// 6. Parent �����Ϳ� p_Child2�� ����Ű�� �޸� ����
	Parent* p_Parent3 = p_Child2;
	p_Parent3->Print();

	// 7. Child �����Ϳ� SampleClass�� �޸� �Ҵ� / ���� (���� ���þ��� Ŭ����)
	Child* p_Child4 = (Child*)new SampleClass();
	p_Child4->Print();

	delete p_Parent; delete p_Parent2;
	delete p_Child; delete p_Child2; delete p_Child4;

	return 0;
}