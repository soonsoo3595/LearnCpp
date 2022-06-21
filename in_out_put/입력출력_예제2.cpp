#include <iostream>
#include <iomanip>

// std 네임스페이스를 사용합니다
using namespace std;

int main()
{
	// 소수점 자리 설정 (2번째 자리에서 반올림)
	setprecision(2);		// 정수 + 소수 기준으로 두 자리수 반올림(사용하기 위해서 iomanip 선언)
	cout.precision(2);		// 위와 동일
	cout << fixed;			// fixed를 사용할 경우 소수점 자리만을 기준으로 반올림
	
	double N = 123.45678;
	cout << N << endl;
	
	double M = 456.789;
	cout.unsetf(ios::fixed);	//	fixed 해제
	cout << setprecision(4) << M << endl;


	return 0;
}