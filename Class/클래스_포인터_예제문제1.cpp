#include "샘플클래스.h"

int main()
{
	샘플클래스* c_Class = new 샘플클래스;
	샘플클래스* y_Class = new 샘플클래스;
	
	cout << "name : ";
	cin >> c_Class->m_Name;

	cout << "score : ";
	cin >> c_Class->m_Score;

	cout << "name : ";
	cin >> y_Class->m_Name;

	cout << "score : ";
	cin >> y_Class->m_Score;

	if (c_Class->m_Score > y_Class->m_Score)
	{
		cout << "철수의 점수가 영희의 점수보다 " << c_Class->m_Score - y_Class->m_Score << "더 높습니다." << endl;
	}
	else
	{
		cout << "영희의 점수가 철수의 점수보다 " << y_Class->m_Score - c_Class->m_Score << "점 더 높습니다." << endl;
	}

	delete c_Class; delete y_Class;
	return 0;
}