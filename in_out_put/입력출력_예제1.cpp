#include <iostream> // ����� ��Ʈ�� (��Ʈ���� �������� �帧, ���ڿ��� ó���ϴ� ��ü, �⺻������ ����Ʈ)
#include <string> // string Ŭ������ ����ϱ� ���� C++ ǥ�� Ŭ����

namespace Sample
{
	int N = 5;
}


int main()
{
	int N		= 3;
	int input	= 0;
	// ǥ�� �Է� ��Ʈ�� ��ü
	// std::cin

	// ǥ�� ��� ��Ʈ�� ��ü
	// std::cout
	
	// �� �� ��ü
	// std::cerr, std::clog

	// �� �� ����� 'std::endl'�� ����ϰų� '\n' (\n�� �ӵ����� �� �� ���)
	
	// ���
	std::cout << Sample::N << std::endl;
	std::cout << N << std::endl;
	std::cin >> input;

	std::cout << "�Է��� ���ڴ�? " << input << std::endl;

	// ���ڿ� �Է¹ޱ�
	// �Ʒ��� ���� �ϸ� ���๮�� �̽�
	// ���๮�� ó�����ϸ� ���� �Է��� �ȵ�
	char name[256];
	std::cout << "����� ģ�� �̸�:";
	std::cin >> name;

	std::cout << "����� ģ�� �̸��� " << name << "�Դϴ�" << std::endl;

	// 1. �� �� �Է��ϱ� [�迭] 
	char s[256];	// �迭 : ũ�Ⱑ ����
	
	std::cout << "���ڿ��� �Է����ּ���[�迭] : ";
	std::cin.get();			// ���๮�� ����
	std::cin.getline(s, 20);	// �迭�� �Է¹��� ���ڿ� ũ��

	std::cout << "����� ģ�� �̸��� " << s << "�Դϴ�" << std::endl;

	// 2. �� �� �Է��ϱ� [string] 
	std::string str;	// ���ڿ� ũ�⿡ ���� Ŭ���� ���� ���� ũ�Ⱑ �����. ũ�� ����X

	std::cout << "���ڿ��� �Է����ּ���[string] :";
	std::getline(std::cin,str);

	std::cout << "�Է��� ���ڿ��� " << str << std::endl;


	return 0;
}