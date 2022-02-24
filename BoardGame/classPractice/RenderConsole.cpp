#include "RenderConsole.h"


RenderConsole::RenderConsole(int** _dat, int _width, int _height) {
	dat = _dat;
}

RenderConsole::~RenderConsole() {}

int RenderConsole::getIndex(int _x, int _y) {
	return dat[_x][_y];
}

int RenderConsole::getInt(char& ch) {
	int res = (ch < 97) ? ch - 48 : ch - 87;
	return res;
}

void RenderConsole::getData(int& x, int& y, string pos) {
	x = getInt(pos[0]);
	y = getInt(pos[1]);
}

char RenderConsole::getChar(const int& ch) {
	int res = (ch < 10) ? ch + 48 : ch + 87;
	return (char)res;
}

void RenderConsole::printRes(int _idx) {
	cout << resource[_idx];
}