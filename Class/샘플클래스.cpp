#include "����Ŭ����.h"

void ����Ŭ����::PrintRank()
{
	if (m_Score >= 95)					cout << m_Name <<"�� ����� A+" << endl;
	else if (m_Score >= 90)				cout << m_Name <<"�� ����� A" << endl;
	else if (m_Score >= 85)				cout << m_Name <<"�� ����� B+" << endl;
	else if (m_Score >= 80)				cout << m_Name <<"�� ����� B" << endl;
	else if (m_Score >= 75)				cout << m_Name <<"�� ����� C+" << endl;
	else if (m_Score >= 70)				cout << m_Name <<"�� ����� C" << endl;
	else if (m_Score >= 65)				cout << m_Name <<"�� ����� D+" << endl;
	else if (m_Score >= 60)				cout << m_Name <<"�� ����� D" << endl;
	else								cout << m_Name <<"�� ����� F" << endl;
												
	
}

����Ŭ����::����Ŭ����()
{

}

����Ŭ����::~����Ŭ����()
{

}