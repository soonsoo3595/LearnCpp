#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	// const_cast
	// ����� �ο� or ����� ����

	// 1. ����� �ο�
	char mArray[] = "Hello"; // ������� �ƴϱ⿡ ������� �ڷ��� �ٲܼ�����
	char mArray2[] = "World";

	// 1. const int* p
	// - �����Ͱ� ����Ű�� int���� �ٲ� �� �����ϴ�
	// - �ٸ� �޸𸮸� �����ϵ��� ���� ����
	 
	// 2. int* const p
	// - �����Ͱ� ����Ű�� ���� �ٲ� �� ����
	// - �ٸ� �޸𸮸� �����ϵ��� ���� �Ұ���
	
	// 3. const int* const p
	// - �����Ͱ� ����Ű�� ���� �ٲ� �� ����
	// - �ٸ� �޸𸮸� �����ϵ��� ���� �Ұ���

	const char* pChar = const_cast<char*>(mArray);
	// pChar[0] = 'A'; -> error
	pChar = mArray2; // ok �ٸ� �޸� �����ϵ��� ���� ����

	char* const pChar2 = const_cast<char*>(mArray); 
	pChar2[0] = 'A';		// pChar2�� �����ϴ� �޸��� �� ���� ����
	// pChar2 = mArray2;	// pChar2�� �ٸ� �޸𸮸� �����ϵ��� �����ϴ°� �Ұ���

	// 2. ����� ����
	const char mArray3[] = "ABCDEF"; // ����� �ο��Ǿ����� ���� �Ұ���
	char* pChar3 = const_cast<char*>(mArray3);

	// mArray3[0] = 'Z';	// ���ڿ� ����̱� ������ ���� ������ �Ұ���
	pChar3[0] = 'Z';		// ������� ���ŵǾ��� ������ ���� ������ ����

	cout << pChar3 << endl;

	return 0;
}