#pragma once

#include <iostream>

using namespace std;


class ����Ŭ����
{
	// public		: ��� �������� ������ ����
	// protected	: �ڱ� �ڽŰ� ��ӹ��� Ŭ����(�ڽ�)���� ������ ���� 
	// private		: �ڱ� �ڽŸ� ������ ����
public:
	char	m_Name[256];
	int		m_Score;

	// �Լ� ���� ����Ű = Ctrl + '.' + Enter
	void	PrintRank();
public:
	����Ŭ����();
	~����Ŭ����();
};

