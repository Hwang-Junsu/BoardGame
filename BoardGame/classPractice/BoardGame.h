#pragma once
#include <iostream>
#include "RenderOmok.h"
#include "RenderOthello.h"
#include "LogicOmok.h"
#include "LogicOthello.h"

class BoardGame
{
	int size;
	int** dat;
	bool type;
	int gameSelect;
	LogicOmok* lptr;
	RenderOmok* rptr;
public:
	BoardGame(int, int**, int, bool);
	~BoardGame();
	void run();
};

