#pragma once
#include <iostream>
#include "RenderNarrow.h"
using namespace std;


class RenderOmok : public RenderNarrow
{
	int line = 0;
	void println();
	void printTopIndex();
public:
	RenderOmok(int**, int, int);
	~RenderOmok();
};