#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "RenderWide.h"
using namespace std;

class RenderBingo : public RenderWide
{
	void println();
	int line = 0;
	void printLine(int);
	void printBlank(int);
	void printSpace(int,int);
public:
	RenderBingo(int**, int, int);
	~RenderBingo();
	void printTopIndex();
};

