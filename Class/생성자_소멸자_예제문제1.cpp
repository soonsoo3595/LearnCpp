#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class UserInfo 
{
private:
	int			id;
	char		name[256];

public:
	void		SetId(int value)		{ id = value; }
	void		SetName(const char* data)		{ strcpy(name, data); }
	int			GetId()					{ return id; }
	char* GetName()						{ return name; }
public:
	UserInfo() { id = 1234; strcpy(name, "�̸�����"); }
	~UserInfo() { cout << "�Ҹ��ڸ� ȣ���մϴ�" << endl; }

};
int main()
{
	UserInfo user;
	user.SetId(4567);
	user.SetName("��ö��");

	cout << "Id : " << user.GetId() << " name : " << user.GetName() << endl;

	return 0;
}