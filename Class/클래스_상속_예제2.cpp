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
				C_CHILD()						{ SetKey(4567); } // C_CHILD 생성자
				~C_CHILD()						{ if (m_pInfo != nullptr) { delete m_pInfo; m_pInfo = nullptr; } }

	void		Set_Info(C_INFO* pInfo)			{ m_pInfo = pInfo; }
	C_INFO*		GetInfo()						{ return m_pInfo; }

	void		Print()
	{
		cout << "-----------------INFO-----------------" << endl;
		cout << "	ID : " << GetKey() << endl;
		cout << "	이름 : " << m_pInfo->GetName() << endl;
		cout << "	나이 : " << m_pInfo->GetAge() << endl;
		cout << "--------------------------------------" << endl;
	}
};


int main()
{
	C_CHILD		mChild;				// 정적 할당
	mChild.Set_Info(new C_INFO);	// C_INFO를 동적 할당한 후 mChild의 m_pInfo에 참조

	char		tempName[256];
	int			tempAge;

	cout << "이름을 입력해주세요 : ";
	cin >> tempName;

	cout << "나이을 입력해주세요 : ";
	cin >> tempAge;

	// tempName과 tempAge를 mChild의 멤버 포인터 m_pInfo의 멤버 name과 age에 넣어주세요

	mChild.GetInfo()->SetName(tempName);
	mChild.GetInfo()->SetAge(tempAge);

	mChild.Print();


	return 0;
}