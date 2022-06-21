// �߻�Ŭ������?
// �߻� �޼ҵ带 ������ �ִ� Ŭ����

// �߻� �޼ҵ�(���� ���� �Լ�)��?
// �θ�Ŭ�������� ������ �����Լ��� �ڽ� Ŭ�������� �ݵ�� �������ϵ��� ������ �� (�������� ����)

// �������̽���?
// �߻�޼ҵ�θ� �����Ǿ� �ִ� Ŭ����

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

	// virtual Ű���� ����ؼ� �߻�޼ҵ带 ������ �� ������ �߻� �޼ҵ带 ������ �ִ� Ŭ������ �߻� Ŭ������� ��
	// �߻�Ŭ������ ��ӹ޴� �ڽ� Ŭ�������� �ݵ�� �߻�޼ҵ带 ������ ����� �Ѵ�
	// �߻� Ŭ������ �� �ڱ� �ڽ� Ŭ������ ��ü(�ν��Ͻ�)�� ������ �� ����

	virtual void PrintArea() = 0; // ���̸� ����ϴ� �Լ� (�߻� �޼ҵ�)
};

class Rectangle : public Shape
{
public:
	virtual void PrintArea() // ��Ģ���� �տ� virtual ���̱�
	{
		cout << "�簢���� ���� : " << GetWidth() * GetHeight() << endl;
	}
};

class Triangle : public Shape
{
public:
	virtual void PrintArea()
	{
		cout << "�ﰢ���� ���� : " << GetWidth() * GetHeight() / 2 << endl;
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