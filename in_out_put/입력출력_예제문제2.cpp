#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	int kor, math, eng;

	cout << "�л��� �̸���? ";
	cin >> name;

	cout << "����,����,���� ������ �Է��ϼ��� >> ";
	cin >> kor >> math >> eng;

	cout << "�л��� �̸��� " << name << "�Դϴ�" << endl;
	int sum = kor + math + eng;
	double average = (double)sum / 3;

	cout.precision(2);
	cout << fixed << "������ " << sum << "�̰� ����� " << average << "�Դϴ�" << endl;

	return 0;
}