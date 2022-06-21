// 상속이란?
// 부모 클래스의 멤버를 자식 클래스가 사용하는 것
#include <iostream>
#pragma warning(disable : 4996)

using namespace std;


// 부모클래스
class C_HEAD
{
	// 접근제어자
	// public : 어디서든 접근이 가능
	// protected : 자기 자신과 상속받은 클래스에서만 접근이 가능
	// private : 자기 자신만 접근가능

protected:
	int		m_IQ = 70;
	
public:
	int		GetIQ() { return m_IQ; }

};

// 자식 클래스
// C_BODY는 C_HEAD를 상속받고 있습니다 (자식 클래스)

class C_BODY : public C_HEAD
{
public:
	int		m_Height;
	int		m_Weight;

public:
	// 오버로드란?
	// 같은 클래스 내의 이름이 같은 메소드를 다른 기능으로 사용하게 만들어주는 기능
	// (인자값의 자료형이나, 인자값의 개수를 다르게 설정해야함)
	int		GetHeadIQ()						{ return m_IQ; }
	int		GetHeadIQ(int add)				{ return m_IQ + add; }
	void	GetHeadIQ(const char* name)		{ cout << name << "님의 IQ는? " << m_IQ << endl; }

	// 오버라이드란?
	// 부모클래스에 이미 정의되어 있는 메소드를 자식 클래스에서 다시 재정의 하는 기능
	int		GetIQ()							{ return 0; }
};


int main()
{
	C_HEAD mHead;
	C_BODY mBody;

	cout << "C_HEAD의 IQ: " << mHead.GetIQ() << endl;
	cout << "C_BODY의 IQ: " << mBody.GetIQ() << endl;

	cout << "C_BODY의 getHeadIQ()? " << mBody.GetHeadIQ() << endl;
	cout << "C_BODY의 getHeadIQ(int add)? " << mBody.GetHeadIQ(100) << endl;
	mBody.GetHeadIQ("강아지");

	return 0;
}