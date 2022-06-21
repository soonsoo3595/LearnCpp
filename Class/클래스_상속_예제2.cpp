#include <iostream>
#pragma warning(disable: 4996)

using namespace std;

class C_INFO
{
private:
	char		name[256];
	int			age;

public:
	void		SetName(const char* value)		{ strcpy(name, value); }
	void		SetAge(int value)				{ age = value; }

	char*		GetName()						{ return name; }
	int			GetAge()						{ return age; }
};

class C_PARENT
{
private:
	int			secret_key;

public:
				C_PARENT()						{ secret_key = 1234; }
	void		SetKey(int value)				{ secret_key = value; }
	int			GetKey()						{ return secret_key; }

};

class C_CHILD : public C_PARENT
{
private:
	C_INFO*		m_pInfo = nullptr;

public:
				C_CHILD()						{ SetKey(4567); } // C_CHILD ������
				~C_CHILD()						{ if (m_pInfo != nullptr) { delete m_pInfo; m_pInfo = nullptr; } }

	void		Set_Info(C_INFO* pInfo)			{ m_pInfo = pInfo; }
	C_INFO*		GetInfo()						{ return m_pInfo; }

	void		Print()
	{
		cout << "-----------------INFO-----------------" << endl;
		cout << "	ID : " << GetKey() << endl;
		cout << "	�̸� : " << m_pInfo->GetName() << endl;
		cout << "	���� : " << m_pInfo->GetAge() << endl;
		cout << "--------------------------------------" << endl;
	}
};


int main()
{
	C_CHILD		mChild;				// ���� �Ҵ�
	mChild.Set_Info(new C_INFO);	// C_INFO�� ���� �Ҵ��� �� mChild�� m_pInfo�� ����

	char		tempName[256];
	int			tempAge;

	cout << "�̸��� �Է����ּ��� : ";
	cin >> tempName;

	cout << "������ �Է����ּ��� : ";
	cin >> tempAge;

	// tempName�� tempAge�� mChild�� ��� ������ m_pInfo�� ��� name�� age�� �־��ּ���

	mChild.GetInfo()->SetName(tempName);
	mChild.GetInfo()->SetAge(tempAge);

	mChild.Print();


	return 0;
}