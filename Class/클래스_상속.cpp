// ����̶�?
// �θ� Ŭ������ ����� �ڽ� Ŭ������ ����ϴ� ��
#include <iostream>
#pragma warning(disable : 4996)

using namespace std;


// �θ�Ŭ����
class C_HEAD
{
	// ����������
	// public : ��𼭵� ������ ����
	// protected : �ڱ� �ڽŰ� ��ӹ��� Ŭ���������� ������ ����
	// private : �ڱ� �ڽŸ� ���ٰ���

protected:
	int		m_IQ = 70;
	
public:
	int		GetIQ() { return m_IQ; }

};

// �ڽ� Ŭ����
// C_BODY�� C_HEAD�� ��ӹް� �ֽ��ϴ� (�ڽ� Ŭ����)

class C_BODY : public C_HEAD
{
public:
	int		m_Height;
	int		m_Weight;

public:
	// �����ε��?
	// ���� Ŭ���� ���� �̸��� ���� �޼ҵ带 �ٸ� ������� ����ϰ� ������ִ� ���
	// (���ڰ��� �ڷ����̳�, ���ڰ��� ������ �ٸ��� �����ؾ���)
	int		GetHeadIQ()						{ return m_IQ; }
	int		GetHeadIQ(int add)				{ return m_IQ + add; }
	void	GetHeadIQ(const char* name)		{ cout << name << "���� IQ��? " << m_IQ << endl; }

	// �������̵��?
	// �θ�Ŭ������ �̹� ���ǵǾ� �ִ� �޼ҵ带 �ڽ� Ŭ�������� �ٽ� ������ �ϴ� ���
	int		GetIQ()							{ return 0; }
};


int main()
{
	C_HEAD mHead;
	C_BODY mBody;

	cout << "C_HEAD�� IQ: " << mHead.GetIQ() << endl;
	cout << "C_BODY�� IQ: " << mBody.GetIQ() << endl;

	cout << "C_BODY�� getHeadIQ()? " << mBody.GetHeadIQ() << endl;
	cout << "C_BODY�� getHeadIQ(int add)? " << mBody.GetHeadIQ(100) << endl;
	mBody.GetHeadIQ("������");

	return 0;
}