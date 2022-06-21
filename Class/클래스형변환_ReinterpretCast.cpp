#include <iostream>
#pragma warning(disable : 4996)

using namespace std;


int main()
{
	// reinterpret_cast
	// ��� ������ Ÿ�Ե� ��� ������ Ÿ������ ����ȯ�� ����, �����Ͱ� ����ȯ
	// ex. int* -> char* / char* -> int*

	// ������ ĳ��Ʈ ���������� ���� ����ȯ�Ǳ� ������ ��ȯ���迡 ���� �� ��ü�� ���谡
	// ��Ȯ�ϰų� Ư�� ������ �޼��ϱ� ���� ���� ����ϴ� ���� �ٶ���
	
	// ������ ���� (�ּҰ� ��ȿ üũ���� ����) [&�� �ٿ��ּž��մϴ�.]
	int N = 65;
	char* pArray = reinterpret_cast<char*>(&N); // &�ȳ����� �׾����

	cout << pArray << endl;
	
	// ���Ƕ� �Ȱ��� �ڵ��ε� �̺κ��� �� ������ �ȵ�..?
	// ���� m�� pArray2�� ���� �ּҰ��� ���ߵǴµ� �ȵ����� ��..
	// const char* pArray2 = "Hello";
	// int m = reinterpret_cast<int>(pArray2);

	// pArray2�� ���� �ּҰ� ���
	// cout << m << endl;

	// ���� �ּҰ��� char* mChar�ȿ� �־ '\0'���ڱ��� ���

	// 
	// char* mChar = reinterpret_cast<char*>(m);
	// cout << mChar << endl;

	// static_cast ���			(�Լ�ó�� �ӽú��� ��ȯ)
	int	A = 10;
	// float* B = static_cast<float*>(&A); // ��� �Ұ���
	float B = static_cast<float>(A);	// ��� ����(�Ϲ��ڷ��� ����ȯ�� ����)


	// reinterpret_cast ���	(ĳ���õǴ� ��ü�� ������ ����)
	int C = 10;
	float* D = reinterpret_cast<float*>(&C); // ��� ����, ������ ���� X, ������� �� �� ����
	// float D = reinterpret_cast<float>(C)	 // ��� �Ұ���, �Ϲ� �ڷ������� ����ȯ�� �Ұ���

	return 0;
}