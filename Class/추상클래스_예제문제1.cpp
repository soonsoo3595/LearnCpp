#include <iostream>
#include <combaseapi.h>
#pragma warning (disable : 4996)
using namespace std;

class _STUDENT 
{
protected:
	int		ID;

public:
	virtual void	SetID(int value) = 0;
	virtual int		GetID() = 0;
};

class SUJIN : public _STUDENT
{
public:
	virtual void	SetID(int value) { ID = value; }
	virtual int		GetID() { return ID; }
	
	void Print()
	{
		cout << "ID : " << GetID() << endl;
	}
};
int main()
{
	SUJIN* mClass = new SUJIN;
	int tempID;

	cout << "ID : ";
	cin >> tempID;

	mClass->SetID(tempID);

	mClass->Print();

	delete mClass;

	return 0;
}
