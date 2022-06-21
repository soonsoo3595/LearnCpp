#include <iostream>
#include <combaseapi.h>
#pragma warning (disable : 4996)
using namespace std;

// �������̽� _Student
interface _Student
{
	virtual void	SetID(int value)				= 0;
	virtual void	SetName(const char* value)		= 0;
	virtual void	SetAge(int value)				= 0;

	virtual int		GetID()							= 0;
	virtual char*	GetName()						= 0;
	virtual int		GetAge()						= 0;
};

class AbstractStudent : public _Student
{
protected:
	int		m_StudentID;
	char	m_StudentName[256];
	int		m_StudentAge;

public:
	void Print()
	{
		cout << "���ѤѤѤѤ� Info �ѤѤѤѤѦ�"	<< endl;
		cout << "ID : " << m_StudentID << endl;
		cout << "�̸� : " << m_StudentName << endl;
		cout << "���� : " << m_StudentAge << endl;
		cout << "���ѤѤѤѤѤѤѤѤѤѤѤѤѦ�"	<< endl;
	};
};

class Y_Class : public AbstractStudent
{
public:
	virtual void	SetID(int value)				{ m_StudentID = value; }
	virtual void	SetName(const char* value)		{ strcpy(m_StudentName, value); }
	virtual void	SetAge(int value)				{ m_StudentAge = value; }

	virtual int		GetID()							{ return m_StudentID; }
	virtual char*	GetName()						{ return m_StudentName; }
	virtual int		GetAge()						{ return m_StudentAge; }
};


int main()
{
	Y_Class mClass;
	int tempID;
	char tempName[256];
	int tempAge;

	cin >> tempID;
	cin >> tempAge;
	cin >> tempName;

	mClass.SetAge(tempAge);
	mClass.SetID(tempID);
	mClass.SetName(tempName);

	mClass.Print();

	return 0;
}