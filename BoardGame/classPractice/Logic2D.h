#pragma once
#include <iostream>
#include "LogicBase.h"
using namespace std;


class Logic2D : public LogicBase
{
	int** dat;

protected:
	int count;
	int player;
	int dx[8] = { -1,-1,0,1,1,1,0,-1 }; // �� ������� �ð����
	int dy[8] = { 0,1,1,1,0,-1,-1,-1};
	int width, height;
	pair<int, int> vPoint[100];
	pair<int, int> vIndex;

	void setPlayer(); // �÷��̾� �ٲٱ�
	bool analyzeDir(int, int, int, int, int, int); //2���� �����м�
	bool isEmpty(int, int);

	virtual bool analyze(int, int, int, int) = 0;
	int getValue(int, int);
	void setValue(int, int, int);
	void resetCount();
	void findIndex(int,int, int, int);

public:
	Logic2D(int, int);
	~Logic2D();
	int getPlayer(); // �÷��̾� ���� ���
	int** getDat();
};

