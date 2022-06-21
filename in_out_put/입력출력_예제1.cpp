#include <iostream> // 입출력 스트림 (스트림은 데이터의 흐름, 문자열을 처리하는 객체, 기본단위는 바이트)
#include <string> // string 클래스를 사용하기 위한 C++ 표준 클래스

namespace Sample
{
	int N = 5;
}


int main()
{
	int N		= 3;
	int input	= 0;
	// 표준 입력 스트림 객체
	// std::cin

	// 표준 출력 스트림 객체
	// std::cout
	
	// 그 외 객체
	// std::cerr, std::clog

	// 한 줄 띄우기는 'std::endl'를 사용하거나 '\n' (\n이 속도에서 좀 더 우월)
	
	// 출력
	std::cout << Sample::N << std::endl;
	std::cout << N << std::endl;
	std::cin >> input;

	std::cout << "입력한 숫자는? " << input << std::endl;

	// 문자열 입력받기
	// 아래와 같이 하면 개행문자 이슈
	// 개행문자 처리안하면 다음 입력이 안됨
	char name[256];
	std::cout << "당신의 친구 이름:";
	std::cin >> name;

	std::cout << "당신의 친구 이름은 " << name << "입니다" << std::endl;

	// 1. 한 줄 입력하기 [배열] 
	char s[256];	// 배열 : 크기가 고정
	
	std::cout << "문자열을 입력해주세요[배열] : ";
	std::cin.get();			// 개행문자 제거
	std::cin.getline(s, 20);	// 배열과 입력받을 문자열 크기

	std::cout << "당신의 친구 이름은 " << s << "입니다" << std::endl;

	// 2. 한 줄 입력하기 [string] 
	std::string str;	// 문자열 크기에 따라서 클래스 내부 버퍼 크기가 변경됨. 크기 고정X

	std::cout << "문자열을 입력해주세요[string] :";
	std::getline(std::cin,str);

	std::cout << "입력한 문자열은 " << str << std::endl;


	return 0;
}