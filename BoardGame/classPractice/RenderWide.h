#pragma once
#include <iostream>
#include "RenderConsole.h"
using namespace std;


class RenderWide : public RenderConsole
{
protected:
	int height;
	int width;
	virtual void printLine(int);
	virtual void printSpace(int, int);
	virtual void printTopIndex();
	virtual void println();
	virtual void printBlank(int);
public:
	RenderWide(int**, int, int);
	~RenderWide();
	void printBoard();
};

