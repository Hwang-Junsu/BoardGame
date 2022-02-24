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
	int dx[8] = { -1,-1,0,1,1,1,0,-1 }; // 위 방향부터 시계방향
	int dy[8] = { 0,1,1,1,0,-1,-1,-1};
	int width, height;
	pair<int, int> vPoint[100];
	pair<int, int> vIndex;

	void setPlayer(); // 플레이어 바꾸기
	bool analyzeDir(int, int, int, int, int, int); //2차원 공간분석
	bool isEmpty(int, int);

	virtual bool analyze(int, int, int, int) = 0;
	int getValue(int, int);
	void setValue(int, int, int);
	void resetCount();
	void findIndex(int,int, int, int);

public:
	Logic2D(int, int);
	~Logic2D();
	int getPlayer(); // 플레이어 변수 얻기
	int** getDat();
};

