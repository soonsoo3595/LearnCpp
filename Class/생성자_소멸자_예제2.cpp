#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Car
{
private:
	char	name[256];

public:
	void	SetName(char* data)		{ strcpy(name, data); }
	char*	GetName()				{ return name; }

public:
			Car()					{ strcpy(name, "�� ����"); }
			Car(const char* data)			{ strcpy(name, data); }
			~Car()					{ cout << "�Ҹ��� ȣ��" << endl; }
};


int main()
{
	Car			c_Car, y_Car;
	Car			h_Car("���̹���");
	char		tempName[256];

	cout << "������ ��? ";
	cin >> tempName;

	y_Car.SetName(tempName);

	cout << "ö���� ����? " << c_Car.GetName() << "�Դϴ�" << endl;
	cout << "������ ����? " << y_Car.GetName() << "�Դϴ�" << endl;
	cout << "������ ����? " << h_Car.GetName() << "�Դϴ�" << endl;

	return 0;
}