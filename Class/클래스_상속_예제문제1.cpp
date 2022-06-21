#include <iostream>
#pragma warning(disable : 4996)

using namespace std;


class CarInfo
{
private:
	char	color[256];
	int		carNumber;
	int		speed;
	int		gear;

public:
	void	SetColor(const char* data)		{ strcpy(color, data); }
	void	SetCarNumber(int data)			{ carNumber = data; }
	void	SetSpeed(int data)				{ speed = data; }
	void	SetGear(int data)				{ gear = data; }
	
	char*	GetColor()						{ return color; }
	int		GetCarNumber()					{ return carNumber; }
	int		GetSpeed()						{ return speed; }
	int		GetGear()						{ return gear; }

	void	Print()
	{
		cout << "색상 : " << color << endl;
		cout << "Car Number : " << carNumber << endl;
		cout << "Speed : " << speed << endl;
		cout << "Gear : " << gear << endl;
	}
};

class C_Car : public CarInfo
{
private:
	int		ID;
	char	name[256];

public:
	void	SetID(int value)				{ ID = value; }
	void	SetName(const char* data)		{ strcpy(name, data); }

	int		GetID()							{ return ID; }
	char*	GetName()						{ return name; }

	void Print()
	{
		cout << "색상 : " << GetColor() << endl;
		cout << "Car Number : " << GetCarNumber() << endl;
		cout << "Speed : " << GetSpeed() << endl;
		cout << "Gear : " << GetGear() << endl;

		cout << "ID : " << GetID() << endl;
		cout << "Name : " << GetName() << endl;
	}
};

int main()
{
	CarInfo*	mInfo =		new CarInfo;
	C_Car*		mC_Car =	new C_Car;

	char		tempColor[256];
	int			tempNumber;
	int			tempSpeed;
	int			tempGear;

	int			tempID;
	char		tempName[256];

	cout << "tempColor >> ";
	cin >> tempColor;

	cout << "tempNumber >> ";
	cin >> tempNumber;

	cout << "tempSpeed >> ";
	cin >> tempSpeed;

	cout << "tempGear >> ";
	cin >> tempGear;

	cout << "tempID >> ";
	cin >> tempID;

	cout << "tempName >> ";
	cin >> tempName;

	mInfo->SetColor(tempColor);
	mInfo->SetCarNumber(tempNumber);
	mInfo->SetSpeed(tempSpeed);
	mInfo->SetGear(tempGear);


	mC_Car->SetColor(tempColor);
	mC_Car->SetCarNumber(tempNumber);
	mC_Car->SetSpeed(tempSpeed);
	mC_Car->SetGear(tempGear);
	mC_Car->SetID(tempID);
	mC_Car->SetName(tempName);

	mC_Car->Print();


	delete mInfo; delete mC_Car;

	return 0;
}