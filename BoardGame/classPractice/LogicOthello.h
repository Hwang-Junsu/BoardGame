#pragma once
#include <iostream>
#include "LogicBase.h"
#include "Logic2D.h"
using namespace std;

class LogicOthello : public Logic2D
{
	void initData();
	bool analyze(int, int,int,int);
public:
	LogicOthello(int, int);
	~LogicOthello();
	void setData(int, int);
};

