#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	int kor, math, eng;

	cout << "학생의 이름은? ";
	cin >> name;

	cout << "국어,수학,영어 점수를 입력하세요 >> ";
	cin >> kor >> math >> eng;

	cout << "학생의 이름은 " << name << "입니다" << endl;
	int sum = kor + math + eng;
	double average = (double)sum / 3;

	cout.precision(2);
	cout << fixed << "총점은 " << sum << "이고 평균은 " << average << "입니다" << endl;

	return 0;
}