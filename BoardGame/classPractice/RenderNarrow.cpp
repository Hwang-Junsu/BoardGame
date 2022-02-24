#include "RenderNarrow.h"


RenderNarrow::RenderNarrow(int** _dat, int _width, int _height) : RenderConsole(_dat, _width, _height) {
	width = _width;
	height = _height;
}

RenderNarrow::~RenderNarrow() {

}

void RenderNarrow::printBoard() {
	printTopIndex();
	printLine(2, 0);

	for (int i = 1; i <= height - 2; i++) printLine(5, i);

	printLine(8, height- 1);
}

void RenderNarrow::printLine(int _si, int _r) { 

	int index = _si;
	int ci = (getIndex(_r, 0) == 0) ? index : 10 + getIndex(_r, 0);
	printRes(ci); index++;
	for (int i = 0; i < width-2; i++) {
		ci = (getIndex(_r, i+1) == 0) ? index : 10 + getIndex(_r, i+1);
		printRes(ci);
	}
	index++;
	ci = (getIndex(_r, width-1) == 0) ? index : 10 + getIndex(_r, width-1);
	printRes(ci);
	println();

}


void RenderNarrow::printTopIndex() {
	cout << endl;
};

void RenderNarrow::println() {
	cout << endl;
}