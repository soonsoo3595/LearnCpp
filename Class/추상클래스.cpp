// 추상클래스란?
// 추상 메소드를 가지고 있는 클래스

// 추상 메소드(순수 가상 함수)란?
// 부모클래스에서 구현한 가상함수를 자식 클래스에서 반드시 재정의하도록 설정한 것 (다형성을 위해)

// 인터페이스란?
// 추상메소드로만 구성되어 있는 클래스

#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

class Shape
{
private:
	int		width;
	int		height;

public:
	void	SetWidth(int value)		{ width = value; }
	void	SetHeight(int value)	{ height = value; }
		
	int		GetWidth()				{ return width; }
	int		GetHeight()				{ return height; }

	// virtual 키워드 사용해서 추상메소드를 선언할 수 있으며 추상 메소드를 가지고 있는 클래스를 추상 클래스라고 함
	// 추상클래스를 상속받는 자식 클래스들은 반드시 추상메소드를 재정의 해줘야 한다
	// 추상 클래스는 그 자기 자신 클래스를 객체(인스턴스)로 생성할 수 없다

	virtual void PrintArea() = 0; // 넓이를 출력하는 함수 (추상 메소드)
};

class Rectangle : public Shape
{
public:
	virtual void PrintArea() // 규칙으로 앞에 virtual 붙이기
	{
		cout << "사각형의 넓이 : " << GetWidth() * GetHeight() << endl;
	}
};

class Triangle : public Shape
{
public:
	virtual void PrintArea()
	{
		cout << "삼각형의 넓이 : " << GetWidth() * GetHeight() / 2 << endl;
	}
};

int main() 
{
	Rectangle mRect;
	Triangle mTri;

	int tempWidth;
	int tempHeight;

	cout << "mRect width : ";
	cin >> tempWidth;

	cout << "mRect height : ";
	cin >> tempHeight;

	mRect.SetHeight(tempHeight);
	mRect.SetWidth(tempWidth);


	cout << "mTri width : ";
	cin >> tempWidth;

	cout << "mTri height : ";
	cin >> tempHeight;

	mTri.SetHeight(tempHeight);
	mTri.SetWidth(tempWidth);

	mRect.PrintArea();
	mTri.PrintArea();

	return 0;
}