#include <iostream>
#include "샘플클래스4.h"

using namespace std;

int main()
{
	샘플클래스4		student[5];
	int				score = 0; 
	int				id = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 학생의 score와 id 입력해주세요" << endl;
		cin >> score >> id;
		student[i].setScore(score);
		student[i].setId(id);
	}

	int				sum = 0; // 총점
	double			average = 0; // 평균
	int				max	= 0; // 가장 높은 점수를 받은 학생 점수
	int				max_id = 0; // 가장 높은 점수를 받은 학생의 ID

	
	for (int i = 0; i < 5; i++)
	{
		if (max < student[i].getScore())
		{
			max = student[i].getScore();
			max_id = i;
		}
		sum += student[i].getScore();
	}

	average = (double)sum / 5;

	cout.precision(2);
	cout << fixed << "총점 : " << sum << ", 평균 : " << average << endl;
	cout << "가장 높은 점수를 받은 학생의 ID : " << student[max_id].getId() << "점수 : " << max << endl;
	
	
	return 0;
}