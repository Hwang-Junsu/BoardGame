#pragma once
#include <iostream>
#include <random>
#define ERROR -1
#define EMPTY 0
using namespace std;

class LogicBase // ���� �������� ������ ����
{
private:
	int checkValue = ERROR;
	int ranNumber[100] = { 0, };

protected:
	bool isSequential(int, int&); // ���Ӽ��� �Ǵ��ϴ� bool
	void setCheckValue(int); // üũ�� ���� ��
	int ranNum(int,int);
	int randomNumber(int,int); // ���� �̱�.
	void putInNumber(int); // �迭�� ���� �ֱ�(�ߺ����ϱ�)
public:
	LogicBase(int, int);
	~LogicBase();

};


