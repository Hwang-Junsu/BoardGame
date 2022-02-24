#pragma once
#include <iostream>
#include "LogicBase.h"
#include "Logic2D.h"
using namespace std;

class LogicOmok : public Logic2D
{
	bool analyze(int, int, int, int);
public:
	LogicOmok(int, int);
	~LogicOmok();

	bool setData(int, int); // 오목에서 데이터 입력
};

