#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	cout << "���ϱ� : " << N + M << endl;
	cout << "���� : " << N - M << endl;
	cout << "���ϱ� : " << N * M << endl;

	cout.precision(2);
	cout << fixed;
	cout << "������ : " << (double)N / (double)M << endl;
	return 0;
}