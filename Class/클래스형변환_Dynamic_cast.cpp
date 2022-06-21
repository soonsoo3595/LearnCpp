#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Parent
{
public:
	virtual void Print() = 0;
};

class Child : public Parent
{
public:
	virtual void Print() { cout << "child" << endl; }
};

class Child2 : public Parent
{
public:
	virtual void Print() { cout << "child2" << endl; }
};

int main()
{
	// dynamic_cast
	// run-time�� �������� ����ȯ�ϴ� ĳ���� ������
	// ��Ӱ��踦 ĳ���� �� �� �ֽ��ϴ�
	// dynamic_cast�� ����ϱ� ���ؼ��� �θ�Ŭ������ �ݵ�� �߻� �޼ҵ带 ������ �־���մϴ�
	// ��ȯ ����� ũ�� ������ static_cast�� ����ؼ� ��ȯ����� ���̴� ���� ����
	
	Parent* pParent		=		new Child;
	Parent* pParent2	=		new Child2;

	// �������� ����ȯ
	Child* pChild2 = static_cast<Child*>(pParent);
	pChild2->Print();


	// ��Ÿ�ӿ� �������� ����ȯ (�ڷ����� �����غ����� ���)
	// ��Ÿ�� ������ üũ�� ���� Child�� �ƴ� ��ü���� ����ȯ ����� NULL�� ��ȯ
	Child* pChild3 = dynamic_cast<Child*>(pParent2); // NULL ��ȯ
	// pChild3->Print(); // ���α׷� �׾����
	
	// ����ó�� �������
	if (pChild3 != NULL)		pChild3->Print();
	else
	{
		cout << "pChild Null" << endl;
	}


	// 1. �������� ����ȯ (static_cast)
	Child2* pChild4 = static_cast<Child2*>(pParent);
	pChild4->Print();

	// 2. �������� ����ȯ
	Child2* pChild5 = dynamic_cast<Child2*>(pParent2);
	if (pChild5 != NULL)	pChild5->Print();
	else					cout << "pChild5 Null" << endl;
	
	// ��ü�� �ϳ� ������ �˻��Ҷ� ���

	delete pParent; delete pParent2;

	return 0;
}