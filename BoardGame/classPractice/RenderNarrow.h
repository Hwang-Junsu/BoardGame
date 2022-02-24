#pragma once
#include <iostream>
#include "RenderConsole.h"

class RenderNarrow : public RenderConsole
{
protected:
	int width;
	int height;
	void printLine(int, int);

public:
	RenderNarrow(int**,int,int);
	~RenderNarrow();
	void printBoard();
	virtual void printTopIndex();
	virtual void println();
};

