#pragma once
#include <iostream>
#include "LogicBase.h"
#include "Logic2D.h"
using namespace std;

class LogicBingo : public Logic2D
{
	bool analyze(int, int, int, int);
	void initData();
public:
	int bingo1p = 0;
	int bingo2p = 0;
	LogicBingo(int, int);
	~LogicBingo();
	bool setData(int, int);
};

