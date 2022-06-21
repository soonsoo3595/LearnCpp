#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	cout << "더하기 : " << N + M << endl;
	cout << "빼기 : " << N - M << endl;
	cout << "곱하기 : " << N * M << endl;

	cout.precision(2);
	cout << fixed;
	cout << "나누기 : " << (double)N / (double)M << endl;
	return 0;
}