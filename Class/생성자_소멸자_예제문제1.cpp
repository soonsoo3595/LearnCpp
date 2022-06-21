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
	UserInfo() { id = 1234; strcpy(name, "이름없음"); }
	~UserInfo() { cout << "소멸자를 호출합니다" << endl; }

};
int main()
{
	UserInfo user;
	user.SetId(4567);
	user.SetName("김철수");

	cout << "Id : " << user.GetId() << " name : " << user.GetName() << endl;

	return 0;
}