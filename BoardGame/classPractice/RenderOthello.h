#pragma once
#include <iostream>
#include "RenderWide.h"
using namespace std;

class RenderOthello : public RenderWide 
{
	void println();
	void printSpace(int, int);
	int line = 0;

public:
	RenderOthello(int**,int,int);
	~RenderOthello();

	void printTopIndex();
};

