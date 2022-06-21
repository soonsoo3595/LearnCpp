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
	// compile-time (���α׷� ���� �� ������ �ϴ� ����) // run-time (���α׷��� �����ϰ� �ִ� �ð�)
	// compile-time�� �������� ����ȯ�ϴ� ĳ��Ʈ ������
	// ��Ӱ��踦 ĳ���� �� �� ������, Ŭ������ ��Ȯ�� �˰� ���� ��쿡�� ���
	// ��ȯ ���(�޸� ���?)�� ���� ������ ���� ���
	// (dynamic_cast�� run-time�� üũ)

	Parent mParent;
	Child* pChild = static_cast<Child*>(&mParent);
	pChild->Print(); // �Լ��� ȣ�������� ����� ������ ��, �޸𸮰� �ʱ�ȭ �ȵż�

	Child mChild;
	Parent* pParent = static_cast<Parent*>(&mChild);
	pParent->Print(); // OK

	SampleClass mSample;
	// Parent* pParent2 = static_cast<Parent*>(&mSample); // ��Ӱ��谡 �ƴ� �ٸ� Ŭ�������� ����ȯ�� �Ұ����մϴ�

	
	return 0;
}